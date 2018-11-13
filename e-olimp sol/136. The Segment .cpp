#include <cstdlib>
#include <iostream>

using namespace std;
long long gcd(long long k,long long f)
 {
  if(f==0) return k;
  else return gcd(f,k%f);
 }
int main(int argc, char *argv[])
{
long long a, b, c, d, k, f;
    cin>>a>>b>>c>>d;
    k=(c-a);
    f=(d-b);
  long long n;

  if(k<0)k*=-1;
  if(f<0)f*=-1;

    n = gcd ( k, f );

    n+=1;

 cout<<n<<endl;


 return 0;
}