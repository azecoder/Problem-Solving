
#include <iostream>
#include <stdio.h>
#include <math.h>

#define MOD 30000

using namespace std;

typedef unsigned long long ll;

ll fi(int n) {
  ll result = n;
  int sq = sqrt(1.0 * n);
  for (int i = 2; i <= sq; i++) {
      if (n % i == 0) result -= result / i;
      while (n % i == 0) n /= i;
  }
  if (n > 1)
      result -= result / n;
  return result;
}

bool prime(int n) {
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (int i = 3; i * i <= n; i++)
      if (n % i == 0)
          return false;
  return true;
}

ll pow(ll base, ll exp, ll modulus) {
  exp--;
  base %= modulus;
  ll result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((result % modulus) * (base % modulus)) % modulus;
    base = ((base % modulus) * (base % modulus)) % modulus;
    exp >>= 1;
  }
  return result;
}

int main()
{
  int t , p;
  ll n;
     
  scanf("%d",&t);
  while (t--) {
      cin >> n >> p;
     
      ll ans = 0;
     
      if (prime(n)) {
          ans = pow(n , n , p) + ((n - 1) % p) % p;
      }
      else {
          ll sq = sqrt(1.0 * n);
          for (ll i = 1; i <= sq; i++) {
              if (n % i == 0) {
                  ll k = fi(n / i);
                  ans += ((k % p) * (pow(n , i, p) % p)) % p;
                  if (i * i != n)    
                      ans += ((fi(i) % p) * (pow(n , n / i , p) % p));
              }
              ans %= p;
          }
      }
      cout << ans % p << endl;
  }
 
  return 0;
} 