#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int k,d=1;
int main(int argc, char *argv[])
{
  long long a,b,c,d,e,f,g=0,h=0,i,j,k=0;
  long long m,n=0,l;
  cin>>a>>b>>c;
  d=a+b;
  while(d!=0){
  e=d%c;
  g+=e;
  d/=c;
  h+=d;
}
k=k+h;
  while(g!=0){
  m=g%c;
  n+=m;
  g/=c;
  k+=g;}
  while(n!=0){
              n/=c;
              k+=n;
              }
  cout<<k<<endl;
       
         return EXIT_SUCCESS;
}