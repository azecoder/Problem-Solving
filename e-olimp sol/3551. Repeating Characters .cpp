#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>

using namespace std;

char s[222];
int test,t,n,r,i,j,k;
int main(int argc, char *argv[]) 
{
  cin>>test;
  for(j=1;j<=test;j++)
  {
     cin>>t>>r>>s;
     cout<<t<<" ";

     n=strlen(s);
     for(i=0;i<n;i++)
     {
        for(k=1;k<=r;k++)   cout<<s[i];
     }    
     cout<<endl;
  }

 return 0;
}