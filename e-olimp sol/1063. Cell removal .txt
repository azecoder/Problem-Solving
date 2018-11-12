#include <iostream>
#include<stdlib.h>

using namespace std;

int n, m;
char a[102][102];
int used[102][102];

void dfs(int i, int j)
{
   used[i][j] = 1;
   if(!used[i - 1][j] && a[i - 1][j] == '#')  dfs(i - 1, j);
   if(!used[i + 1][j] && a[i + 1][j] == '#')  dfs(i + 1, j);
   if(!used[i][j - 1] && a[i][j - 1] == '#')  dfs(i, j - 1);
   if(!used[i][j + 1] && a[i][j + 1] == '#')  dfs(i, j + 1);
}

int main()
{
   cin >> n >> m;
   for(int i = 1; i <= n; i++)
       for(int j = 1; j <= m; j++)
       {
           char ch;
           cin >> ch;
           a[i][j] = ch;
       }
   int ans = 0;
   for(int i = 1; i <= n; i++)
       for(int j = 1; j <= m; j++)
           if(!used[i][j] && a[i][j] == '#')
           {
               ans ++;
               dfs(i, j);
           }
   cout << ans << endl;
   return 0;
} 