#include <stdio.h>
#include <stdlib.h>
int balls[100];
char mark[100];
int main()
{
   int N,B;
   register int absolute,i,j,count;
   char c;
   N = B = 0;
   while((c=getchar())!=' ')
       N = N*10 +c-'0';
   while((c=getchar())!='\n')
       B = B*10 + c-'0';
   while(N||B)
   {
       for(i=0;i<=N;i++)mark[i]=balls[i]=0;
       j = 0;
       while((c=getchar())!='\n')
           if(c!=' ')
               balls[j]=balls[j]*10 + c-'0';
           else
               j++;
       count = 0;
       for(i=0;i<B;i++)
           for(j=i;j<B;j++)
           {
               absolute = abs(balls[i]-balls[j]);
               count+=!mark[absolute];
               mark[absolute] = 1;
           }

       if(count==N+1)
           putchar('Y');
       else
           putchar('N');
       putchar('\n');
       N = B = 0;
       while((c=getchar())!=' ')
           N = N*10 + c-'0';
       i++;
       while((c=getchar())!='\n')
           B = B*10 + c-'0';
   }
   return 0;
}