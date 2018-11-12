#include <cstdlib>
#include <iostream>

using namespace std;
long w,k,a[100000],s=0;
void quicksort(int lo, int hi){
   int r;
   r=a[(lo+hi)/2];
   int i,j;
   i=lo; j=hi;
   do{

       while(a[i]<r) i++;
       while(a[j]>r) j--;
       if(i<=j)
       {
           int x;
           x=a[i]; a[i]=a[j]; a[j]=x;i++;j--;}

   }while(i<=j);
   if(lo<j)quicksort(lo,j);
   if(hi>i)    quicksort(i, hi);
}

int main(int argc, char *argv[])
{

   cin>>w>>k;
   for(int i=0;i<k;i++)
       cin>>a[i];
       quicksort(0,k-1);
       if(k-w<0)k=w;
       for(int i=k-1;i>=k-w;i--)
           s+=a[i];

       cout<<s<<endl;
 
   return EXIT_SUCCESS;
} 