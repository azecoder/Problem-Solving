#include <iostream>
#include <cmath>
#define MODN 10000007

using namespace std;

unsigned long long dp[55][55];

unsigned long long powtwo[60],two=2,n;

int bits[55];


int main()
{

 dp[0][0]=1;

 dp[1][0]=1;
 dp[1][1]=1;

 for(int i=0;i<55;i++)
     dp[i][0]=1;

 for(int i=2;i<55;i++){
     for(int j=0;j<=i;j++){
         dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
     }
 }

 powtwo[0]=1;
 for(int i=1;i<=58;i++)
     powtwo[i] = powtwo[i-1]*two;





 while(cin>>n){
 bool flag=false;
 for(int i=0;i<60;i++)
     bits[i]=0;

 int l;
 int cnt=0;
 unsigned long long ans=0;

 for(int i=58;i>=0;i--){
     if((n&powtwo[i])!=0){
         bits[i]=1;
         if(flag==false){
             flag=true;
             l=i;
         }
         cnt++;
     }
     else
         bits[i]=0;
 }
     for(int j=3;j<=l;j+=3){
         ans+=dp[l][j];
     }

 int x;

 for(int i=0;i<=58;i++){
     if(bits[i]==1){
         if(cnt%3==0 && cnt!=0)
             ans++;
         cnt--;
         x = (3-(cnt%3))%3;

         if(cnt==0){
             break;
         }

         if(x==0)
             x+=3;
             for(int z=x;z<=i;z+=3){
                 ans+=dp[i][z];
             }
     }
 }
 cout<<"Day "<<n<<": Level = "<<ans<<endl;

 }
 return 0;
} 