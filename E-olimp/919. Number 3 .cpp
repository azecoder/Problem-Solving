#include <cstdlib>
#include <iostream>

using namespace std;
#define size 101
int main(int argc, char *argv[])
{
   int n,i;
       cin>>n;
   double a[size];
       for(i=0; i<n; i++)
          cin>>a[i];
   double k,sum;
   k=0;
   sum=0;
   for(i=2; i<n; i+=3)
      {
         if(a[i]>0)
            {
               sum+=a[i];
               k++;
            }
      }
   cout<<k<<" ";
   cout.setf(ios::fixed);
   cout.precision(2);
   cout<<sum<<endl;

   
   return EXIT_SUCCESS;
}