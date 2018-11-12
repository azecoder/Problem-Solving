#include <cstdlib>
#include <iostream>
#include<math.h>

long long euter (long long x);
long long d (long long y);
using namespace std;

int main(int argc, char *argv[])
{
 long long n;
 while(scanf("%lld",&n)!=EOF){
    // cout<<euter(n)<<"\n"<<d(n)<<"\n";
cout<<n-euter(n)-d(n)+1<<"\n";



     }

 return EXIT_SUCCESS;
}


long long d(long long x)
{
  long long i,res1=1,c;
  for(i=2;i<=(long long)sqrt(1.0*x);i++){
      if(x%i==0)
      {
          c=0;
          while(x%i==0){
              x/=i;

              c++;
          }
              res1*=c+1;



  }
}
  if(x>1) res1*=2;
  return res1;
}
long long euter (long long y)
{
  int i,res=y;
  for(i=2;i<=(long long)sqrt(1.0*y);i++){
      if(y%i==0)
      res-=res/i;
      while(y%i==0)
      y/=i;
  }
  if(y>1)res-=res/y;
  return res;
}