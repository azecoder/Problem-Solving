#include <iostream>
#include <string.h>
#include <vector>

using namespace std;


char s[101][101][101],p[101][101],bossey[10];
int n,k[101],used[101],cycle,loop[101],i,j,l;
vector<int>g[101];


void dfs(int src){

   if(cycle)
       return;

   used[src] = 1;

   for(int j = 0; j < g[src].size(); j++){

       int to = g[src][j];
       if(!used[to])
           dfs(to);
           else
       if(to == i)
       {
           cycle = 1;
           return ;
       }
   }
   used[src] = 2;
}

int main()
{

   ios_base::sync_with_stdio(false);

   cin >> n;

   for( i = 1; i <= n; i++){

       cin >> p[i] >> k[i];
       for( j = 1; j <= k[i]; j++)
           cin >> s[i][j];

           if(i < n)
               cin >> bossey;

   }

   for( i = 1; i <= n; i++)
       for( j = 1; j <= k[i]; j++)
           for( l = 1; l <= n; l++)
               if(strcmp(s[i][j],p[l]) == 0){
                       if(i == l)
                       loop[i] = 1;
               else
               g[i].push_back(l);
           }

           for( i = 1; i <= n; i++){

                  cout << p[i] << ": ";
               dfs(i);
               if(cycle || loop[i])
                   cout << "YES" << endl;
               else
                   cout << "NO" << endl;

               memset(used, 0, sizeof(used));
               cycle = 0;
           }


   return 0;
} 
