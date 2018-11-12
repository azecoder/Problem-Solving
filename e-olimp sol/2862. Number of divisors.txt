#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
#define size 10001
int main(int argc, char *argv[])
{
   int n;
      cin>>n;

   int i,j,k,b[size];
   int t;
        t=sqrt(n);
        b[1]=1;
        for(i=2;i<=t;i++)
            {
              if(!b[i])
                 {
                    for(j=i;j*i<=n;j++)
                        {
                           if(!b[i*j])
                              {
                                 b[i*j]=1;
                              }
                        }
                 }
            }
   int m,ans;
   m=n;
   ans=1;
   for(i=2;i<=n;i++)
       {
         if(!b[i])
            {  k=0;
               while(m%i==0)
                     {
                       k++;
                       m/=i;
                     }
               ans*=(k+1);
               if(m==1) break;
            }
       }
   cout<<ans<<endl;

   
   return EXIT_SUCCESS;
}