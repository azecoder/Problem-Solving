#include <stdio.h>
#include <iostream>
#define mod 1000000007
using namespace std;
long long n,k,d,f[105][105],sign[105][105],ans,i,j,kk;
int main(int argc, char *argv[])
{
    scanf("%lld %lld %lld",&n,&k,&d);
    
    if(n<d)
    ans=0;
    else
    {
        for(i=1;i<=k;i++)
        f[1][i]=1;
        
        for(i=d;i<=k;i++)
        sign[1][i]=1;
        
        for(i=2;i<=n;i++)
        for(j=i;j<=n;j++)
  {
              for(kk=1;kk<=k && j-kk>=i-1; kk++)
      {
             f[i][j]+=f[i-1][j-kk];
            if(kk>=d)
               sign[i][j]+=f[i-1][j-kk];
               else
               sign[i][j]+=sign[i-1][j-kk];
    }
        f[i][j]%=mod;
        sign[i][j]%=mod;}
        for(i=1;i<=n;i++)
        ans+=sign[i][n];
        ans%=mod;}
        printf("%lld\n",ans);
    return 0;
}
