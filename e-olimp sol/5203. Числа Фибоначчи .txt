#include <iostream>

using namespace std;

#define ull unsigned long long
#define ll long long
#define size 1000001
#define MAX 1000000000LL

ull i,j,a[size],x,y;

ll GCD (ll a, ll b)
{
  if(b == 0)
      return a;
  else
      return GCD(b, a%b);
}


int main()
{
  cin >> x >> y;

  a[1] = a[2] = 1;

  for(i = 3; i <= GCD(x,y); i++)
  {
      a[i] = a[i-1] % MAX + a[i-2] % MAX;
      a[i] %= MAX;

  }

  cout << a[GCD(x,y)] << endl;

  return 0;
}