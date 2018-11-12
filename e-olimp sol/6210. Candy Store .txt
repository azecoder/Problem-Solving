#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <memory.h>
#define MOD 1000000007

using namespace std;

int dp[10010];

int n,dollar,cent,money; // n, c <= 5000 - m, p <= 100.00 

void calc(){

  for(int i=1;i<=money;i++)
      for(int j=1;j<i;j++)
          {
              if((dp[j]+dp[i-j])>dp[i])
                   dp[i] = (dp[j]+dp[i-j]);
              //dp[i] = max(dp[j]+dp[i-j],dp[i]);
          }
}

int main()
{
  char ch;
  int cal;
  while(scanf("%d %d.%d",&n,&dollar,&cent)!=EOF){
  if(n==0 && dollar==0 && cent==0)
      break;
  money = dollar*100+cent;

  for(int i=0;i<n;i++){
      scanf("%d %d.%d",&cal,&dollar,&cent);
      if(cal>dp[dollar*100+cent])
           dp[dollar*100+cent] = cal;
      //dp[dollar*100+cent]=max(dp[dollar*100+cent],cal);
  }
  calc();
   printf("%d\n",dp[money]);
  //cout<<dp[money]<<endl;
  memset(dp,0,sizeof(dp));
  }

  return 0;
} 