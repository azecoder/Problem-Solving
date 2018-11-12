#include <cstdlib>
#include <iostream>

#define LL long long
using namespace std;

LL int gcd(LL int a,LL int b)
{
  return (b) ? gcd(b, a%b) : a;
}

LL int x1,v1,x2,v2,x,v,N;    
int main(int argc, char *argv[])
{  
  cin >> x1 >> v1 >> x2 >> v2;
  x = x2 - x1;
  if(x < 0)    x = -x;
  v = v2 - v1;
  if(v < 0)    v = -v;
  N = gcd(x, v);
  cout << N + 1 << endl;
 
  return 0;
} 