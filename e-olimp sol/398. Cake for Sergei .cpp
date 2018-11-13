#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long s,n,k,i;

int main(int argc, char *argv[])
{

scanf("%llu",&n);

n+=1;


if(n==1)
 printf("0\n");

else if(n==2)
 printf("1\n");

else if(n>=3 && n<=4)
 printf("2\n");

else
{
  k=4; s=2;
  for(i=0; i<=210000001; i++)
     {
      s++;
      k=k+3+i;
      if(n<=k)
        {
          printf("%llu\n",s);
          break;
        }
     }
}



return 0;
}