#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define MAX 1001
#define size 101

  queue <int> q;

int i,j,k,n,a[size][size],x,y,used[size],dist[MAX];


void bfs(int sourceNode, int destinationNode)
{
  q.push(sourceNode);
  used[q.front()] = 1;
   if(used[destinationNode] == 1)
      {
          cout << dist[sourceNode] << endl;
          return;
      }
      a[sourceNode][sourceNode] = 0;

  while(!q.empty())
  {
  //    cout<<q.front()<<endl;
      int nextNode = q.front();
      q.pop();
      for(int r = 0; r < n; r ++)
      {
          if(a[nextNode][r] == 1 && used[r] == 0)
          {
            //  cout<<r<<endl;
              a[nextNode][r] = 0;
              a[r][nextNode] = 0;
         //     cout<<nextNode<<" "<<r<<endl;
              dist[r] = dist[nextNode] + 1;
              q.push(r);
              used[r] = 1;
              if(used[destinationNode] == 1)
              {
                  cout << dist[destinationNode] << endl;
                  return;
              }
          }
      }

  }
  if(used[destinationNode] == 0)
      cout << "-1" << endl;
}


int main()
{
  cin >> n;
  for(i = 0; i < n; i ++)
      for(j = 0; j < n; j ++)
          cin >> a[i][j];

  cin >> x >> y;
  if(n == 0)
  {
      cout << "-1" << endl;
      return 0 ;
  }
  bfs(x-1, y-1);
  return 0;
}