#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long n;
#define size 1000001

char a[size];

using namespace std;

int main(int argc, char *argv[])
{

      scanf("%s",a);

    n=strlen(a);
    long i;
    long sum=0;
    for(i=0; i<n; i++)
       {
           sum+=(a[i]-48);
       }
   if(sum%3==0)    cout<<"Yes"<<endl;
   else            cout<<"No"<<endl;
   if((a[n-1]-48)%2==0 && sum%3==0)     cout<<"Yes"<<endl;
   else            cout<<"No"<<endl;
   if(sum%9==0)    cout<<"Yes"<<endl;
   else            cout<<"No"<<endl;

   
   return EXIT_SUCCESS;
}