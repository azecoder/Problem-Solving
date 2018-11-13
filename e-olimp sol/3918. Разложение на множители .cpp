#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>


using namespace std;
#define size 100000001

int b[size], i, m, l, n;

int main(int argc, char *argv[])
{
  cin>>m;

int k=0;
  for(i=2;i<=sqrt(m);i++)
     while(m%i==0)
      {k=1;
      cout<<i;
         m/=i;
         if(m==i)  break;
         else  goto a;
      }

a:    for(i=2;i<=sqrt(m);i++)
       while(m%i==0)
          {
              cout<<" ";
              cout<<i;
           m/=i;
          }
         if(m>1)
          {
              if(k==1)
              {
              cout<<" ";
              cout<<m;
              }
              else
                cout<<m;
          }


   cout<<endl;




   
   return EXIT_SUCCESS;
}