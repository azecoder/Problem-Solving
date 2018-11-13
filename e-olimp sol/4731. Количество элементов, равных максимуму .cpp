#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
#define size 10000
int main(int argc, char *argv[])
{
 double n,max;
 long a[size],i;
 i=0;
 while(1)
      {
          cin>>n;
          a[i]=n; i++;
          max==0;
          if(n==0) break;
          else {
                 if(n>max) max=n;
               }
      }
 long l,k;
      l=i;
      for(i=0; i<l; i++)
          {
             if(max==a[i]) k++;
          }
  cout<<k<<endl;

 
 return EXIT_SUCCESS;
}