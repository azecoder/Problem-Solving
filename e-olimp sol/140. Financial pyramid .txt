#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;
long n,m,k,s,a,d,e,h,i;
int main(int argc, char *argv[])
{
 cin>>n;
 d=2;
 a=2;
 e=2;
 for(i=2;i<=n;i++){
      a*=2;
      d+=a;
      if(d%2==0)
      h=d/2;
      else
      h=d/2;
      d=d-h;
      e=a-h;
  }
     cout<<e<<" "<<d<<"\n";



  return EXIT_SUCCESS;
}