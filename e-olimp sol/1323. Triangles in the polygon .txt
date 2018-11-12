#include <cstdlib>
#include <iostream>
long long n,k,b,i;
long long link(long long n,long long k);

long long gcd(long long x,long long y);

using namespace std;

int main(int argc, char *argv[])
{

   while(scanf("%lld",&n)!=EOF)
   {
     k=link(n,6)+5*link(n,5)+4*link(n,4)+link(n,3);
     cout<<k<<"\n";
   }
  return EXIT_SUCCESS;
}
long long link(long long x,long long y)
{
 long long res=1;
 long long i,d1;
 if(y>x) return 0;
 else
 {
   if(x-y<y) y=x-y;

   for(i=1;i<=y;i++)
   {
      d1=gcd(res,i);
      res=(res/d1)*((x-i+1)/(i/d1));
   }
   return res;
 }
}
long long gcd(long long x,long long y)
{
   return (y)?gcd(y,x%y):x;
}