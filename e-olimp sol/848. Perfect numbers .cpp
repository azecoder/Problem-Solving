#include <stdio.h>

int a,b,i,j,x[5];

int main()
{
   scanf("%d%d",&a,&b);

   if(6>=a && 6<=b)    x[i++]=6;
   if(28>=a && 28<=b)    x[i++]=28;
   if(496>=a && 496<=b)    x[i++]=496;
   if(8128>=a && 8128<=b)    x[i++]=8128;
   if(33550336>=a && 33550336<=b)    x[i++]=33550336;

   if(i==0)    printf("Absent\n");
   else
   {
       for(j=0; j<i; j++)
           printf("%d\n",x[j]);
   }


   return 0;
}