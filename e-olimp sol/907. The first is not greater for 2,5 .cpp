#include <stdio.h>
#include <stdlib.h>

 int i,n;
 float a[100], k;

int main(int argc, char *argv[])
{

 scanf("%d", &n);
 for(i=0; i<n; i++)
 scanf("%f", &a[i]);

 k=0;
 for(i=0; i<n; i++)

 if(a[i]<=2.5)
 {k=1;
 break;}

 if(k==0)
 printf("Not Found\n");

 else
 printf("%d %.2f\n", i+1, a[i]);


return 0;
}