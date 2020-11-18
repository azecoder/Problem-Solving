#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a[9][9],x,y,i,j,n,max;

  scanf("%d",&n);
  for(i=1; i<=8; i++)
  for(j=1; j<=8; j++)
     a[i][j]=0;

  for(i=1; i<=n; i++)
  {
      scanf("%d%d",&x,&y);    a[x][y]++;
  }

  max=0;
  for(i=1; i<=8; i++)
  for(j=1; j<=8; j++)
     if(a[i][j]>max)   max=a[i][j];

  printf("%d\n",max);

return 0;
}