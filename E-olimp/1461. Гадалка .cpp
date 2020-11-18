#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define size 10001

long a[size];
long c[size];
long b[size];
int main(int argc, char *argv[])
{
   long n;
   long k;
       cin>>n>>k;
   long i;
       for(i=0; i<n; i++)
           cin>>a[i];
   long l;
       l=0;
       for(i=0; i<n; i++){
           if(a[i]>0 && a[i]<10){
               c[l]=a[i]; l++;
               }
           if(a[i]>9 && a[i]<100){
               c[l]=(a[i]/10)*(a[i]%10); l++;
               }
           if(a[i]>99 && a[i]<1000){
               c[l]=(a[i]/100)*(a[i]/10%10)*(a[i]%10); l++;
               }
           if(a[i]>999 && a[i]<10000){
               c[l]=(a[i]/1000)*(a[i]/100%10)*(a[i]/10%10)*(a[i]%10); l++;
               }
           }
   long m;
   long s;
       m=l;
       s=0;
       for(l=0; l<m; l++){
           if(c[l]>k) { b[s]=c[l]-k; s++; }
           else       { b[s]=k-c[l]; s++; }
           }
   long w, minn;
       w=s;
       minn=b[0];
       for(s=0; s<w; s++){
           if(b[s]<minn) minn=b[s];
           }
       for(s=0; s<w; s++){
           if(minn==b[s]){
               cout<<a[s]; break;
               }
           }
           cout<<endl;
   
   return EXIT_SUCCESS;
}