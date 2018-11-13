#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, n;
double x, total, hasil;
char a[100001];
int main(int argc, char *argv[])
{

 gets(a);


n=strlen(a);  //    printf("%d\n",n);

total=0;
hasil=1;
  for(i=0; i<n; i++)
   {  //     printf("%d\n",a[i]-48);
     total=total+(a[i]-48);
   }  //     printf("%.3lf\n", total);
  for(i=0; i<n; i++)
   {
     hasil=hasil*(a[i]-48);
   }  //     printf("%.3lf\n", hasil);

   x=hasil/total;
 printf("%.3lf\n",x);


return 0;
}