#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdio>
#include <cstdlib>

#define pi 3.14159

using namespace std;

char ch;
int i,n,t,k;
double v[101],r,h,v1,s,l,maxi;
int main(int argc, char *argv[]) 
{
  cin>>n;
  for(t=1;t<=n;t++)
  {
     cin>>ch;
     if(ch=='C')
     {
        cin>>r>>h;
        v1=(pi*r*r*h)/3;
        v[t]=v1;
     }
     else if(ch=='S')
     {
        cin>>r;
        v1=(4*pi*r*r*r)/3;
        v[t]=v1;
     }
     else if(ch=='L')
     {
        cin>>r>>h;
        v1=pi*r*r*h;
        v[t]=v1;
     }
  }
  maxi=v[1];
  for(i=2;i<=n;i++)   if(v[i]>maxi)   maxi=v[i];
  printf("%.3lf\n", maxi); 
  
  return 0;
}