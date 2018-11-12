#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#pragma comment(linker, "/STACK:100000000")
#define pi acos(-1.0)
#define N 1000000
#define LL __int64
#define ULL unsigned long long
#define MOD 1000000009
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

struct Matrix
{
   LL a , b , c , d;
   Matrix()
   {
       a = b = c = 1;
       d = 0;
   }
};

Matrix mul(Matrix A , Matrix B)
{
   Matrix res;
   res.a = ( (A.a * B.a) % MOD + (A.b * B.c) % MOD ) % MOD;
   res.b = ( (A.a * B.b) % MOD + (A.b * B.d) % MOD ) % MOD;
   res.c = ( (A.c * B.a) % MOD + (A.d * B.c) % MOD ) % MOD;
   res.d = ( (A.c * B.b) % MOD + (A.d * B.d) % MOD ) % MOD;
   return res;
}

Matrix E;

Matrix pow(Matrix A , LL n)
{
   if (n == 1)
       return E;
   Matrix x = pow(A , n / 2);
   if (n%2 == 0)
       return mul(x , x);
   return mul(A , mul(x , x));
}

LL n;
int main()
{
   ios_base::sync_with_stdio(false);

   cin >> n;
   Matrix res = pow(E , n + 1);
   LL ans = (res.a % MOD) * (res.b % MOD) % MOD - (LL)1;
   if (ans < 0) ans += MOD;
   cout << ans << endl;


   return 0;
} 