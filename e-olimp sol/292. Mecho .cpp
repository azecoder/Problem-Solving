#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <utility>
#include <deque>
#include <string.h>

using namespace std;

#define MAX_N 2000

int cx[4] = {1, -1, 0, 0};
int cy[4] = {0, 0, 1, -1};

char mainMap[MAX_N][MAX_N];
bool reachable[MAX_N][MAX_N];

int beeDistance[MAX_N][MAX_N];

int n, s;
int dx, dy;
int mx, my;


bool test(int delay)
{

   if (delay * s >= beeDistance[mx][my])
       return false;

   memset(reachable, 0, sizeof(reachable));
   deque<pair<int, pair<int, int> > > q;
   q.push_back(make_pair(delay * s, make_pair(mx, my)));
   reachable[mx][my] = true;

   while (!q.empty())
   {
       int distance = q.front().first;
       int x = q.front().second.first;
       int y = q.front().second.second;

       q.pop_front();

       if (mainMap[x][y] == 'D')
           return true;

       for (int c = 0; c < 4; c++)
       {
           int nx = x + cx[c];
           int ny = y + cy[c];

           if (nx < 0 || nx >= n || ny < 0 || ny >= n || mainMap[nx][ny] == 'T' || (distance + 1) >= beeDistance[nx][ny] || reachable[nx][ny])
               continue;

           q.push_back(make_pair(distance + 1, make_pair(nx, ny)));
           reachable[nx][ny] = true;
       }
   }

   return false;
}
int main(int argc, char **argv)
{
   cin >> n >> s;

   deque<pair<int, int> > bq;
   memset(beeDistance, -1, sizeof(beeDistance));

   for (int i = 0; i < n; i++)
   {
       cin >> ws;
       for (int j = 0; j < n; j++)
       {
           cin >> mainMap[i][j];
           if (mainMap[i][j] == 'H')
           {
               bq.push_back(make_pair(i, j));
               beeDistance[i][j] = 0;
           }
           else if (mainMap[i][j] == 'M')
           {
               mx = i;
               my = j;

               mainMap[i][j] = 'G';
           }
           else if (mainMap[i][j] == 'D')
           {
               dx = i;
               dy = j;
           }
       }
   }


   while (!bq.empty())
   {
       int x = bq.front().first;
       int y = bq.front().second;

       bq.pop_front();

       for (int c = 0; c < 4; c++)
       {
           int nx = x + cx[c];
           int ny = y + cy[c];

           if (nx < 0 || nx >= n || ny < 0 || ny >= n || mainMap[nx][ny] != 'G' || beeDistance[nx][ny] != -1)
               continue;

           beeDistance[nx][ny] = beeDistance[x][y] + s;
           bq.push_back(make_pair(nx, ny));
       }
   }


   beeDistance[dx][dy] = n * n * s;

   int low = -1, high = 2 * n * n;
   while (high - low > 1)
   {
       int mid = (low + high) >> 1;
       if (test(mid))
           low = mid;
       else
           high = mid;
   }

   cout << low << endl;
   return 0;
} 