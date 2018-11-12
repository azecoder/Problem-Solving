#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int a[1000],i,k=0,c,d,n;
   cin>>n;
   for(i=0;i<n;i++)
       cin>>a[i];

   if(n%2!=0){
        for(i=n/2-1;i>0;i--){
           c=a[i];
           a[i]=a[i-1];
           a[i-1]=c;
       }
       for(i=n/2+2 ;i<n;i++){
           c=a[i];
           a[i]=a[i-1];
           a[i-1]=c;
       }
   }

  if(n%2==0)
  {
       for(i=n/2-1;i>0;i--)
       {
           c=a[i];
           a[i]=a[i-1];
           a[i-1]=c;
       }
       for(i=n/2+1;i<n;i++)
       {
           c=a[i];
           a[i]=a[i-1];
           a[i-1]=c;
       }

   }

   for(i=0;i<n-1;i++)    cout<<a[i]<<" ";
   cout<<a[n-1]<<"\n";


   return EXIT_SUCCESS;
} 