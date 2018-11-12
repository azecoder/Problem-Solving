#include <cstdlib>
#include <iostream>

using namespace std;
unsigned long long gcd(unsigned long long a,unsigned long long b){
  return b ? gcd(b,a%b) : a;
}   
unsigned long long comb(unsigned long long n,unsigned long long k){
  unsigned long long res=1;
  unsigned long long d,i;
  if(n-k<k)
      k=n-k;
  for(i=1;i<=k;i++){
      d=gcd(res,i);
      res=(res/d)*((n-i+1)/(i/d));
  }
  return res;
}
int main(int argc, char *argv[])
{unsigned long long j,m,l,s,t;
  cin>>t;
  for(j=1;j<=t;j++){
  cin>>m>>l;
s=comb(m,l);
cout<<s<<endl;
}

  
    return EXIT_SUCCESS;
}