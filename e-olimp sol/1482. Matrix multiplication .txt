#include <stdio.h>
#include <string.h>


int a[101][101],b[101][101],c[101][101];
int i,j,k,sum=0,m,n,o,p;

int main()
{
//  birinci massivin uzunluqlari ve massivi daxil edirik
  scanf("%d %d",&m,&n);

for(i=0;i<m;i++)
  for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);

//  ikinci massivin uzunluqlari ve massivi daxil edirik
  scanf("%d %d",&o,&p);

for(i=0;i<o;i++)
  for(j=0;j<p;j++)
     scanf("%d",&b[i][j]);

//  vurma emeliyyatini apaririq.
if(n==o)
 {
   for(i=0;i<m;i++)
      for(j=0;j<p;j++)
         c[i][j]=0;

   for(i=0;i<m;i++)
      {
        for(j=0;j<p;j++)
           {
             sum=0;
             for(k=0;k<n;k++)
                sum=sum+a[i][k]*b[k][j];
             c[i][j]=sum;
           }
      }


//  alinan matrixin uzunluqlari
   printf("%d %d\n",m,p);

//  alinan matrix...
   for(i=0;i<m;i++)
      {
        for(j=0;j<p-1;j++)
           printf("%d ",c[i][j]);

        printf("%d\n",c[i][p-1]);
      }
 }

else
  printf("-1\n");



return 0;
}