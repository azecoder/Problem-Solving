#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
  long n,i,l=2,j,m,a[10000],k;
  scanf("%ld", &n);
  a[1]=2;
  for(i=3;i<=n;i++)
  {
     k=0;
     for(j=2;j<=sqrt(i);j++)
        if(i%j==0)
        {
           k++;
           break;
        }    
     if(k==0)
     {
        a[l]=i;
        l++;
     }
  }  
  k=0;
  for(j=1;j<l;j++)
  {
     if(a[j+1]==a[j]+2)
     {
        m=sqrt(a[j]*a[j+1]+1);
        printf("%ld\n", m);
        k++;
     }
  }  
  if(k==0)      printf("%ld\n", n);
  
  return 0;
}