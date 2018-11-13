#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
unsigned long long gcd(unsigned long long a,unsigned long long b)
{
       return b?gcd(b,a%b):a;
       }
unsigned long long lcm(unsigned long long a,unsigned long long b)
{
       return a*b/gcd(a,b);
       }
unsigned long long n, k[20], i;
int main(int argc, char *argv[])
{
  cin>>n;
  k[1] = lcm(1,2);
  for( i = 2; i <= n; i++ )
       k[i] = lcm(k[i-1],i);
  cout<<k[n]-1<<endl;
  
  return EXIT_SUCCESS;
}