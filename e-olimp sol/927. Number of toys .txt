#include <stdio.h>
#include <stdlib.h>

int n, a[1001], i, s;
float b[10001];

int main(int argc, char *argv[])
{
 scanf("%d", &n);
  for(i=0; i<n; i++)
 scanf("%d %f", &a[i], &b[i]);

  s=0;
  for(i=0; i<n; i++)
    {
     if(b[i]<50)
     s=s+a[i];
    }
    printf("%d", s);
  printf("\n");
 

 return 0;
}