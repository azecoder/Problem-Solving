#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int n,m, a;
int s;
int main(int argc, char *argv[])
{
 scanf("%llu",&n);
   m=n;

   if(n<=1)
       printf("%llu\n",n);

   else
   {
       s=0;
       while(m!=0)
       {
           if(m%2==1)
                s++;
                m=m/2;
               }
               a=pow(2,s);
           printf("%llu\n",a-1);
           }

 return 0;
}