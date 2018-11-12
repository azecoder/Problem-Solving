#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
  int i,j,k,x,n,h,eded1,eded2,flag1,flag2,say,a[1001],b[1001];
  scanf("%d",&n);
  for(h=1; h<=n; h++)
  {
      scanf("%d",&x);
      
      say=0;
      
      for(i=2; i<=x/2; i++)
      {
          flag1=0;
          flag2=0;
          
          eded1=i;
          eded2=x-i;
          
          for(j=2; j<=sqrt(eded2); j++)
          if(eded2%j==0)
          {
              flag1=1;
              break;
          }
          
          if(flag1==0)
          {
              for(k=2; k<=sqrt(eded1); k++)
              if(eded1%k==0)
              {
                  flag2=1;
                  break;
              }
          }
          
          if(flag1==0 && flag2==0)
          {
              say++;
              a[say]=eded1;
              b[say]=eded2;
          }
      }
      
      printf("%d has %d representation(s)\n",x,say);
      
      for(k=1; k<=say; k++)
      if(h!=n && k==say)
      printf("%d+%d\n\n",a[k],b[k]);
      else
      printf("%d+%d\n",a[k],b[k]);
  }
  
  
  return EXIT_SUCCESS;
}