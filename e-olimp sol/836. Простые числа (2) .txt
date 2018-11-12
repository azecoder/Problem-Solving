#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,j,n,b[1000001],m;
int main(int argc, char *argv[])
{

  scanf("%d %d", &n, &m);

int t=sqrt(m);
b[1]=1;
for(i=2;i<=t;i++)
 {
   if(!b[i])
     {
       for(j=i;j*i<=m;j++)
         {
           if(!b[i*j])
            {
              b[i*j]=1;
            }
         }
     }
 }

int a=0;
for(i=n;i<=m;i++)
   {
     if(!b[i])
      {a=1;
     printf("%d\n", i);
      }
   }

     if(a==0)  printf("Absent\n");


return 0;
}