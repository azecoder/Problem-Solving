#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
int n,a[10],i,l=0,j,f1=0,f=0,sum,k;
int main(int argc, char *argv[])
{
 scanf("%d",&n);
 while(f==0){
     l++;
     i=sum=0;
     while(n>0)
     {
         i++;
         a[i]=n%10;
         n/=10;
     }
     for(k=1;k<=i;k++)    sum=sum+(a[k]*a[k]);
     n=sum;
     if(sum==1)
     {
          f=f1=1;
          printf("HAPPY\n");
     }
     if(l==500)    f=1;
 }
 if(f1==0)    printf("SAD\n");

 return EXIT_SUCCESS;
}