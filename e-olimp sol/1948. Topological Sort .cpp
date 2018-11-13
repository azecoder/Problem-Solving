#include <iostream>
#include <vector>

using namespace std;

#define PB push_back

int color[100005];    // agdirsa color = 0 , yasil = 1 , qara = 2
int n,m;
int flag;
int x,y;
vector < vector <int> > G;
vector <int> used;
vector <int> ans;

void dfs (int x){
  if (flag==1) return;
  used[x] = 1;
  color[x] = 1;

  for(int i = 0 ; i<G[x].size(); i++){
      if(color[G[x][i]] == 1){
              flag = 1;
              return;
          }

      if(used[G[x][i]] == 0){
          dfs(G[x][i]);
      }
  }

  ans.PB(x);
  color[x]=2;
}


int main()
{
  cin>>n>>m;
  G.resize(n+1);
  used.resize(n+1);

  for(int i=0; i<m; i++){
      cin>>x>>y;
      G[x].PB(y);
  }

  for(int i=1; i<=n; i++){
      if(used[i] == 0){
          dfs(i);

          if(flag == 1){
              cout<<"-1"<<endl;
              return 0;
          }
      }
  }

  for(int i= ans.size()-1; i>0; i--){
      cout<<ans[i]<<" ";
  }
  cout<<ans[0]<<endl;

  return 0;
} 