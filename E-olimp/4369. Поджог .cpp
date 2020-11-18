#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#pragma comment(linker,"/STACK:56777216")

using namespace std;

vector<int>v[100100];
int n,m,k,od,fr,to,mes[100100];

bool used[100100],burn[100100];

queue<int>q;

void bfs(){
  
  while(!q.empty()){
      int l;
      fr=q.front();
      q.pop();
      l=v[fr].size();
      for(int i=0;i<l;i++)
          if(used[v[fr][i]]==0)
              mes[v[fr][i]]=mes[fr]+1,q.push(v[fr][i]),used[v[fr][i]]=1;
      }
  }


int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++)
      {
          scanf("%d%d",&fr,&to);
          v[fr].push_back(to);
          v[to].push_back(fr);
      }
  cin>>k;
  for(int i=1;i<=k;i++){
      scanf("%d",&od);
      burn[od]=1;
      q.push(od);
      used[od]=1;
  }
  
  bfs();
  
  int maxi=-10000000,pos;
  
  for(int i=1;i<=n;i++)
      if(mes[i]>maxi)
          maxi=mes[i],pos=i;
  cout<<maxi<<endl<<pos<<endl;
  

  return 0;
}