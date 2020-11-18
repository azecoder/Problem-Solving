#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
 {
  if(b==0) return a;
  else return gcd(b,a%b);
 }
int main(int argc, char *argv[])
{
    int n;
    scanf("%d\n",&n);

     if(n>1)
{
    int a,b;
    scanf("%d %d", &a, &b);

     int i;
      a=gcd(a,b);
     for(i=1; i<=n-2; i++)
     {
       scanf("%d", &b);
       a=gcd(a,b);
     }

    printf("%d\n", a);
}

else
{
  int a;
 scanf("%d", &a);
 printf("%d\n",a);
}
 
 return 0;
}