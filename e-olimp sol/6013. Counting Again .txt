#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#define MOD 1000000007

using namespace std;

long long dp[10010][4]; // test cases <= 100, n <= 10000
long long ans[10010];

int main()
{
   ans[0]=1;
   ans[3]=3;

   for(int i=6;i<=10000;i+=3){

       dp[i][2] = (ans[i-6]*2)%MOD;
       dp[i][1] = (ans[i-6]*2)%MOD;

       dp[i][2]=(dp[i][2]+dp[i-3][2])%MOD;
       dp[i][1]=(dp[i][1]+(dp[i-3][1]+dp[i-3][2])%MOD)%MOD;
       ans[i] = (ans[i-3]*3)%MOD;
       ans[i] = (ans[i]+(dp[i][2]+dp[i][1])%MOD)%MOD;

   }
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       cout<<ans[n]<<endl;
   }

   return 0;
} 