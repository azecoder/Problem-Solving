#include <stdio.h>

int a[1501],i,x1,x2,k1,k2,k3,p,eded,hasil;
unsigned long long n;

int main()
{
  a[0]=1;
  a[1]=1;
  x1=1;
  x2=1;

  for(i=2; i<1500; i++)
  {
      p=x1+x2;
      x1=x2;
      x2=p;

      p=p%1000;
      x1=x1%1000;
      x2=x2%1000;

      hasil=1;
      eded=p;

      if(i>=2 && i<=10)
      {
          while(eded>0)
          {
              hasil=hasil*(eded%10);
              eded=eded/10;
          }
      }
      else
      {
          k1=eded%10;
          k2=eded/10%10;
          k3=eded/100%10;
          hasil=k1*k2*k3;
      }

      a[i]=hasil;
  }

  while(scanf("%llu",&n)!=EOF)
  {
      if((n>=1500) && ((n%1500)<=10))
          printf("0\n");
      else
      {
          n=n%1500;

          printf("%d\n",a[n]);
      }
  }

 return 0;
}