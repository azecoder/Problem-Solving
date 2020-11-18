#include <cstdlib>
#include <iostream>

using namespace std;
long long n,a[10000000],c,b;
void quicksort ( long lo, long hi)
{

  long   i=lo, j=hi, h;


 long x=a[(lo+hi)/2];


  do
  {
      while (a[i]<x) i++;
      while (a[j]>x) j--;
      if (i<=j)
      {
          h=a[i]; a[i]=a[j]; a[j]=h;
          i++; j--;
      }
  } while (i<=j);


  if (lo<j) quicksort(lo, j);
  if (i<hi) quicksort(i, hi);
}
int main(int argc, char *argv[])
{
   cin>>n;
   for(long i=0;i<n;i++)
       cin>>a[i];
       quicksort(0,n-1);
   if(a[0]!=1)cout<<1<<endl;
       else{
       b=a[0];
       for(long  i=1;i<n;i++)
           if(a[i]<=b+1)
               b=a[i]+b;
               else
               c=b+1;

           if(c)
   cout<<c<<endl;
   else
   cout<<b+1<<endl;
   }

   
   return EXIT_SUCCESS;
} 