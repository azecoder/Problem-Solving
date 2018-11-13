#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <stdio.h>
#include <math.h>
#define maxx 101
#define inf 10000000

using namespace std;


int used[maxx*maxx], parent[maxx*maxx], n, m,cost1,cost2, cap[maxx*maxx][maxx*maxx], max_flow , flow, d;
int i, j, odd = -1, even = 0, cnt = 0, a[maxx][maxx];
char s[maxx][maxx];
vector<int>g[maxx*maxx];


void constract_graph(){

      for(i = 0; i < n; i++)
          for(j = 0; j < m; j++){
      if(a[i][j] % 2 == 1){
              g[0].push_back(a[i][j]);
              g[a[i][j]].push_back(0);
              cap[0][a[i][j]] = 1;

              if(i > 0 && a[i-1][j])
             {
                 g[a[i][j]].push_back(a[i-1][j]);
                 g[a[i-1][j]].push_back(a[i][j]);
                 cap[a[i][j]][a[i-1][j]] = 1;
             }

              if(j > 0 && a[i][j-1])
            {
                g[a[i][j]].push_back(a[i][j-1]);
                g[a[i][j-1]].push_back(a[i][j]);
                cap[a[i][j]][a[i][j-1]] = 1;
            }

              if(i < n - 1 && a[i+1][j])
            {
                g[a[i][j]].push_back(a[i+1][j]);
                g[a[i+1][j]].push_back(a[i][j]);
                cap[a[i][j]][a[i+1][j]] = 1;
            }

              if(j < m - 1 && a[i][j+1])
             {
                 g[a[i][j]].push_back(a[i][j+1]);
                 g[a[i][j+1]].push_back(a[i][j]);
                 cap[a[i][j]][a[i][j+1]] = 1;
             }

      }
      else
          if(a[i][j] > 0)
             {
                 g[a[i][j]].push_back(d);
                 g[d].push_back(a[i][j]);
                 cap[a[i][j]][d] = 1;
             }
  }
}

bool bfs(int s,int d){

  memset(used, 0 , sizeof(used));
 // memset(parent, -1, sizeof(parent));
  queue<int>q;
  q.push(s);
  used[s] = 1;
  parent[s] = -1;

   while(!q.empty() && !used[d]){
      int cur = q.front(); q.pop();
      for(int  i = 0; i < g[cur].size(); i++)
      {
          int to = g[cur][i];
          if(!used[to] && cap[cur][to]){
              q.push(to);
              used[to] = 1;
              parent[to] = cur;
          }
      }
   }
   if(used[d])
      return true;
   return false;
  }

  void FLOW(int d){

      if(d == 0)
          return ;
     flow = min(flow, cap[parent[d]][d]);
     FLOW(parent[d]);
      }

   void renetwork(int d){

      if(d == 0)
          return;
    cap[parent[d]][d] -= flow;
      cap[d][parent[d]] += flow;
          renetwork(parent[d]);
      }

int main()
{


          scanf("%d %d %d %d",&n,&m,&cost1,&cost2);

          for(i = 0; i < n; i++)
           {
               scanf("%s",s[i]);
               for(j = 0; j < m; j++)
               {
                  if(s[i][j] == '*')
                  {
                      cnt++;
                      if((i+j)%2 == 0){
                              odd += 2;
                          a[i][j] = odd;
                      }

                      else{
                          even += 2;
                          a[i][j] = even;
                      }
                  }
               }
           }

            if(cost1 >= 2*cost2)
              {
                  cout<<cnt*cost2<<endl;
                  return 0;
              }

               d = min(odd, even) + 2;
           constract_graph();



               max_flow = 0;
               flow  = inf;

           while(bfs(0,d)){
              FLOW(d);
              renetwork(d);
              max_flow += flow;
           }


          cout<<(max_flow*cost1+(cnt - max_flow*2)*cost2)<<endl;

  return 0;
}
