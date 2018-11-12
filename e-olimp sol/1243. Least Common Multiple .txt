#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long long ekob(unsigned long long a,unsigned long long b)
{
unsigned long long x,y,c;
x=a;
y=b;
while(b!=0)
{
    a=a%b;
    c=a;
    a=b;
    b=c;
}
return x*y/a;
}

unsigned long long i,a[101],n,x;

int main(int argc, char *argv[])
{
  scanf("%llu",&x);
  
  while(x>=1)
  {
      scanf("%llu",&n);
      
      for(i=1; i<=n; i++)
      scanf("%llu",&a[i]);

      for(i=2; i<=n; i++)
      {
          a[i]=ekob(a[i-1],a[i]);
      }
 
      printf("%llu\n",a[n]);
      x--;
  }


return EXIT_SUCCESS;
}