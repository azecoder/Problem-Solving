#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  char a[10000];
  int i,j,k,lm,n,b,c,sum=0;
  cin>>a;
  n=strlen(a);
  for(i=0;i<n;i++){
                   if(a[i]=='1')
                   sum=sum+2;
                   if(a[i]=='2')
                   sum=sum+5;
                   if(a[i]=='3')
                   sum=sum+5;
                   if(a[i]=='4')
                   sum=sum+4;
                   if(a[i]=='5')
                   sum=sum+5;
                   if(a[i]=='6')
                   sum=sum+6;
                   if(a[i]=='7')
                   sum=sum+3;
                   if(a[i]=='8')
                   sum=sum+7;
                   if(a[i]=='9')
                   sum=sum+6;
                   if(a[i]=='-')
                   sum=sum+1;
                   if(a[i]=='0')
                   sum=sum+6;
                   }
                   cout<<sum<<endl;
 
  return EXIT_SUCCESS;
}