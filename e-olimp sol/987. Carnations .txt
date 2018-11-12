#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int a[101][3],n,mas[1001],a1[101][3];
 void quicksort(int lo, int hi){
 int r;
 r=mas[(lo+hi)/2];
 int i,j;
 i=lo; j=hi;
 do{

     while(mas[i]<r) i++;
     while(mas[j]>r) j--;
     if(i<=j)
     {
         int x;
         x=mas[i]; mas[i]=mas[j]; mas[j]=x;i++;j--;}

 }while(i<=j);
 if(lo<j)quicksort(lo,j);
 if(hi>i)    quicksort(i, hi);
}

long name(int i,int k){
   if(a1[i][k])
       return a[i][k];

       if(i==1 && k==0){
           a[i][k]=mas[1]-mas[0];
           a1[i][k]=1;
           return a[i][k];
       }
       if(i==1 && k==1){
           a[i][k]=100000000;
           a1[i][k]=1;
           return 100000000;
       }
       if(i==n-1){

           a[i][k]=min( (name(i-1,1)),name(i-1,0) +mas[i]-mas[i-1] );
           a1[i][k]=1;
           return a[i][k];

       }
       if(k==0){

           a[i][k]=min((name(i-1,0)+mas[i]-mas[i-1]),name(i-1,1) );
           a1[i][k]=1;
           return a[i][k];

       }

       a[i][k]=min( (name(i-1,1)+mas[i+1]-mas[i]),name(i-1,0) +mas[i+1]-mas[i] );
           a1[i][k]=1;
       return min( (name(i-1,1)+mas[i+1]-mas[i]),name(i-1,0) +mas[i+1]-mas[i] );

   }
int main(int argc, char *argv[])
{
   cin>>n;
   for(int i=0;i<n;i++)
       cin>>mas[i];
   quicksort(0,n-1);

   cout<<min(name(n-1,0),name(n-1,1))<<endl;
   
   return EXIT_SUCCESS;
}