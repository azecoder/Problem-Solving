#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[100], i, n, x;
int main(int argc, char *argv[])
{
scanf("%d", &n);
    for(i=0;i<n;i++)
scanf("%d", &a[i]);
    x=a[n-1];
    for(i=n-1;i>0;i--)
    a[i]=a[i-1];
    a[0]=x;
    for(i=0;i<n-1;i++)
    printf("%d ", a[i]);
    printf("%d\n", a[n-1]);
 return 0;
}