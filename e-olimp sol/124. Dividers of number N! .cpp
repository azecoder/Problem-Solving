#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[100000001], b[100000001],u, m,i,r,j,g,l,q,p[100000001],s,z,y,x[100000001];

int main(int argc, char *argv[])
{

 scanf("%d", &m);

   for(i=2; i<=sqrt(m); i++)
   {
      if (!b[i])
        {
          for(j=i; j*i<=m; j++)
           {
            if(!b[i*j])
             {
              b[i*j]=1;
             }
           }
        }
     }

q=0;

   for(i=2;i<=m;i++)
   {
     if(!b[i])
      {
       p[q]=i;
       q++;
      }
   }

  l=q;
  /*for(q=0; q<l; q++)
 printf("%d ", p[q]);   printf("\n\n");
 */
 r=0;
 for(g=2; g<=m; g++)
 {      a[r]=g; r++;}
 s=r;
/*  for(r=0; r<s; r++)
 printf("%d ", a[r]);    printf("\n\n");
 */

 y=0; x[0]=0;
 for(q=0; q<l; q++)
 {
    for(r=0; r<s; r++)
    {
      while(a[r]%p[q]==0)
      {a[r]=a[r]/p[q]; x[y]=x[y]+1;}
    }
  y++;
 }

z=y;
// for(y=0; y<z; y++)
//  printf("%d ", x[y]);


u=1;
for(y=0; y<z; y++)
  u=u*(x[y]+1);

printf("%d\n", u);



return 0;
}