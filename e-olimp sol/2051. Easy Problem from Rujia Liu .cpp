#include <cstdlib>
#include <iostream>
long i,y,k,c[100001],d[100001],m,n,a,b;

using namespace std;
void qsort(long lo, long hi){
   long i,j;
   i=lo; j=hi;
   long r;
   r=c[(lo+hi)/2];


do{
   while(c[i]<r)i++;
   while(c[j]>r) j--;
   long p;
   if(i<=j){
       p=c[i];
       c[i]=c[j];
       c[j]=p;
       if( c[i]!=c[j]){
       p=d[i];
       d[i]=d[j];
       d[j]=p;}
       i++; j--;}

   }while(i<=j);
   if(lo<j) qsort(lo,j);
   if(i<hi) qsort(i,hi);
}
void q1sort(long lo, long hi){
   long i,j;
   i=lo; j=hi;
   long r;
   r=d[(lo+hi)/2];


do{
   while(d[i]<r)i++;
   while(d[j]>r) j--;
   long p;
   if(i<=j){

       p=d[i];
       d[i]=d[j];
       d[j]=p;
       i++; j--;}

   }while(i<=j);
   if(lo<j) q1sort(lo,j);
   if(i<hi) q1sort(i,hi);
}
int  main(int argc, char *argv[])
{
   long l=0;
  while( cin>>n){
       cin>>m;
   for(i=0;i<n;i++){
       cin>>c[i];
       d[i]=i+1;
   }

       qsort(0,n-1);

   for(int j=0;j<m;j++){
           l=0;
       cin>>a>>b;
       int k=0,q;
       while(c[l]!=b && l<n){l++;}if(c[l]==b)k=1;
       if(k==1){
           q=l;
           while(c[l]==b)l++;

           q1sort(q,l-1);
          }

       if(c[q+a-1]==b && (q+a-1)<n)
           cout<<d[q+a-1]<<endl;
       else
           cout<<"0\n";
   }
}
   return 0;
} 