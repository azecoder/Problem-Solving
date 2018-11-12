#include <iostream>
#include <stdio.h>
#include <algorithm>

#define MOD 1000000

using namespace std;

struct Matrix
{
  long long a , b , c , d;
  Matrix() {
      a = 1; b = 1; c = 2; d = 3;
  }
};

Matrix Multi(Matrix A , Matrix B)
{
  Matrix res;
  res.a = A.a * B.a + A.b * B.c; res.a %= MOD;
  res.b = A.a * B.b + A.b * B.d; res.b %= MOD;
  res.c = A.c * B.a + A.d * B.c; res.c %= MOD;
  res.d = A.c * B.b + A.d * B.d; res.d %= MOD;
  return res;
}

Matrix emp;

Matrix pow(Matrix A , int b)
{
  if (b == 1) return emp;
  Matrix x = pow(A , b / 2);
  if (b % 2) return Multi(Multi(x , x) , A);
  return Multi(x , x);
}

int main()
{
  int t , n;
  cin>>t;
  while (t--) {
      scanf("%d",&n);
      if (n % 3 != 0) printf("0\n");
      else {
          n /= 3;
          Matrix res = pow(emp , n);
          cout<<(res.a + res.c)%MOD<<endl;
      }
  }

  return 0;
} 