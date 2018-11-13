#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int b[100000001], i, j, m, l, n, s;

int main(int argc, char *argv[])
{

  scanf("%d",&n);

for(s=0; s<n; s++)
{
scanf("%d",&m);

if(m==1)  printf("1");

  for(i=2;i<=sqrt(m);i++)
       while(m%i==0)
          {
           m/=i;
        printf("%d", i);
          if(m==1)  break;
        printf(" * ");
          }
         if(m>1)
          {
          printf("%d", m);
          }


   printf("\n");


}


 return 0;
}