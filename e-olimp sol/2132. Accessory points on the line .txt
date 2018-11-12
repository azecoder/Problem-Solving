#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x, y, a, b, c, ans;
int main(int argc, char *argv[])
{
 scanf("%d%d%d%d%d",&x,&y,&a,&b,&c);

 ans=(a*x)+(b*y)+c;

 if(ans==0)   printf("YES\n");
 else       printf("NO\n");
 
 return 0;
}