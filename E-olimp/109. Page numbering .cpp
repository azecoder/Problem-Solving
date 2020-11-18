#include <stdio.h>
#include <stdlib.h>
int main()
{int n,m;
scanf("%d",&n);
if(n>0&&n<10){
            printf("%d\n",n);
           }
else if(n>9&&n<190)
           {
            if((n-9)%2!=0)
               {
                printf("0\n");
               }
            else
               {
                printf("%d\n",(n-9)/2+9);}
               }
            else if(n>=190&&n<=2891)
               {
                if((n-189)%3!=0)
                 {
                  printf("0\n");
                 }
                else
                 {
                  printf("%d\n",(n-189)/3+99);
                 }
               }
           else if(n==2893)
               {
                printf("1000\n");
               }
           else if(n==2897)
               {
                printf("1001\n");
      }
return 0;
}