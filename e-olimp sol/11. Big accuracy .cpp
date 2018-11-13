#include <stdio.h>
#include <stdlib.h>
//#include <iostream>

int m, n, k, i,t, u,q;
int a[10001];
int main(int argc, char *argv[])
{
 scanf("%d%d%d", &m,&n,&k);
  t=m/n;
  printf("%d.", t);

  m%=n; i=0;

  while(k>0)
  {
   m=m*10;
   q=m/n;
   a[i]=q;
   m=m%n;
    i++;
    k--;
  }

   for(u=0; u<i; u++)
     printf("%d", a[u]);
      printf("\n");


 return 0;
}