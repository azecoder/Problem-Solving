#include <stdio.h>

long a,b;

long ebob(long a, long b)
{
   if(b==0)
       return a;
   else
       return ebob(b,a%b);
}

int main()
{
   scanf("%ld%ld",&a,&b);
   printf("%ld\n",ebob(a,b));


   return 0;
}