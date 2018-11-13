#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

long long sum,i,j,n,k,l;
char s[255];

using namespace std;

int main(int argc, char *argv[])
{  
  while(gets(s))
  {
     if(s[0]=='#')  break;
     sum=0;
     n=strlen(s);
     for(i=0;i<n;i++)
        if(s[i]>64 && s[i]<=90)   sum+=(s[i]-64)*(i+1);      
   
     cout<<sum<<endl; 
  }   
  
  return EXIT_SUCCESS;
}