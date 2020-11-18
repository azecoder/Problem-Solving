#include <cstdlib>
#include <iostream>
#include <cmath>
#include<cstdio>
using namespace std;

int main(int argc, char *argv[])
{
long  n,h,k=0,l,m,p=2,s,i,l1;
scanf("%ld",&n);
h=n;
s=1;
while(h%2==0){
h/=2;k++;}
s*=(2*k+1);
k=0;

m=3;
while(h!=1){

 l=sqrt(m);
 l1=sqrt(h);
 p=0;
 for(i=3;i<=l1;i+=2)
 if(h%i==0){p=1;break;}
 if(p==0){s*=3;break;}
 if(p==1){
   p=0;
   for(i=3;i<=l;i+=2)
   if(m%i==0){p=1;break;}
   k=0;
   if(p==0){
   while(h%m==0){k++;h/=m;}
   s*=(2*k+1);}
   m+=2;
 }
}
printf("%ld\n",s);

  return EXIT_SUCCESS;
}