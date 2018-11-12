#include <stdio.h>
#include <stdlib.h>

 int d1, m1, Y1, d2, m2, y2;

int main(int argc, char *argv[])
{
scanf("%d %d %d\n%d %d %d",&d1,&m1,&Y1,&d2,&m2,&y2);

if(m1 == m2 && d1 > d2) printf("%d\n",y2-Y1-1);
else if(m1>m2) printf("%d\n", y2-Y1-1);
else printf("%d\n", y2-Y1);

return 0;
}