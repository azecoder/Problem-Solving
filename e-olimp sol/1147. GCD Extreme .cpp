#include<stdio.h>
#include<string.h>
#define MAXD 200010
const int N = 200000;
typedef long long LL;
int phi[MAXD];
LL a[MAXD];
void prep()
{
 memset(a, 0, sizeof(a));
 for(int i = 1; i <= N; i ++) phi[i] = i;
 for(int i = 2; i <= N; i ++)
 {
     if(phi[i] == i)
     {
         for(int j = i; j <= N; j += i)
             phi[j] = phi[j] / i * (i - 1);
     }
     for(int j = 1; j * i <= N; j ++)
         a[j * i] += j * phi[i];
 }
 for(int i = 1; i <= N; i ++) a[i] += a[i - 1];
}
int main()
{
 prep();
 int n;
 while(scanf("%d", &n), n) printf("%lld\n", a[n]);
 return 0;
}