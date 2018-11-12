#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

using namespace std;
long n,k,i,j,say,t,b,a[100001],c;

int main(int argc, char *argv[]) 
{
  cin>>n>>k;
  for(j=1;j<=n;j++)
     cin>>a[j];
  for(i=1;i<=k;i++)
  {
     cin>>b;
     say=0;
     for(j=1;j<=n;j++)
        if(a[j]==b)
        {
           say++;   break;
        }   
     if(say==1)         cout<<"Yes, master!"<<endl;
     else if(say==0)    cout<<"Silence"<<endl;
  }

 return 0;
}