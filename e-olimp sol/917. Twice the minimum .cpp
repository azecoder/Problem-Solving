#include <stdio.h>
#include <stdlib.h>

int i,n;
float a[100],min;

int main(int argc, char *argv[])
{

 scanf("%d", &n);
 for(i=0; i<n; i++)
 scanf("%f", &a[i]);


  min=a[0];
  for(i=0; i<n; i++)
  if(a[i]<min)
  {min=a[i];}



  printf("%.2f\n", (min*2));


return 0;
}