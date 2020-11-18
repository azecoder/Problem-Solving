#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
long a,b,c,d,e,mas[100000],t,m,n,s,l,masb[100000];

int main(int argc, char *argv[])
{
cin>>t;
for(int j=1;j<=t;j++){
l=0;
scanf("%d%d%d%d%d",&a,&b,&c,&m,&n);
mas[0]=a;
for(int i=1;i<n;i++)
   mas[i]=(((mas[i-1]%m)*(b%m))%m+c%m)%m+1;

 masb[mas[0]%m]++;
 for(int i=1;i<n;i++){
     mas[i]+=mas[i-1];
     masb[mas[i]%m]++;
 }
 for(int i=0;i<n;i++){
     if(masb[mas[i]%m]>0 && mas[i]%m)
         l+=--masb[mas[i]%m];
     if(masb[mas[i]%m]>0 && mas[i]%m==0)
         l+=masb[mas[i]%m]--;}

   printf("Case %d: %d\n",j,l);
       }


 return EXIT_SUCCESS;
} 