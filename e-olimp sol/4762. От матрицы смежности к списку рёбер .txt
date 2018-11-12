#include <stdio.h>

using namespace std;

int main()
{
 int i,j,n,a[101][101],say=0;
 scanf("%d",&n);
 for(i=1; i<=n; i++)
     for(j=1; j<=n; j++)
         scanf("%d",&a[i][j]);

 for(i=1; i<=n; i++)
     for(j=i; j<=n; j++)
         if(a[i][j]==1)
             printf("%d %d\n",i,j);




 return 0;
}