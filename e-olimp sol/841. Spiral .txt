#include <stdio.h>
#include <stdlib.h>

int n, i, j, k, c=1;
int a[101][101];
int main()
{

    scanf("%d",&n);

   for(k=0;k<n/2;k++)
     {
        for(i=k;i<n-k;i++)
           {
                a[k][i]=c;
                  c++;
           }
        for(i=k+1;i<=n-k-1;i++)
           {
                a[i][n-k-1]=c;
                  c++;
           }
        for(i=n-k-1-1;i>=k;i--)
           {
                a[n-k-1][i]=c;
                  c++;
           }
        for(i=n-k-1-1;i>k;i--)
           {
                a[i][k]=c;
                  c++;
           }
      }

   if(n%2!=0)
      {
           a[(n/2)][(n/2)]=c;
                c++;
      }
      for(i=0;i<n;i++)
          {
          for(j=0;j<n;j++)
             {
                 printf("%d",a[i][j]);

              if(j==(n-1))
                    printf("\n");
              else
                    printf(" ");
             }
          }


return 0;
}