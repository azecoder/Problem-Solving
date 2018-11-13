#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#define INF 250010
using namespace std;

map<int,int> m;
int cnt0=0,cnt1=0;
int n,x;
int ans=0;

int main()
{
  m[0]=0;

  cin>>n;

  for(int i=1;i<=n;i++)
  {
      scanf("%d",&x);
      if(x==1)
          cnt1++;
      else
          cnt0++;
      if(m.count(cnt1-cnt0)==true){
          ans=max(ans,i-m[cnt1-cnt0]);
      }
      else
          m[cnt1-cnt0]=i;
  }

  cout<<ans<<endl;



  return 0;
} 