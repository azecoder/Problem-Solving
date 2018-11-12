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

#define clr(a, b) memset(a, b, sizeof(a))
#define LL long long
#define pb push_back

using namespace std;

struct Matrix {
 LL mat[36][36];
 Matrix() {
     clr(mat, 0);
 }
};


Matrix a , zero , one;
int n , k , mod;
LL ans;

Matrix multi(Matrix a , Matrix b) {
 Matrix res;

 for (int i = 1; i <= n; i++)
     for (int j = 1; j <= n; j++)
         for (int k = 1; k <= n; k++)
             res.mat[i][j] = (res.mat[i][j] + ((a.mat[i][k] % mod) * (b.mat[k][j] % mod)) % mod) % mod;
 return res;
}

Matrix add(Matrix a , Matrix b) {
 Matrix res;
 for (int i = 1; i <= n; i++)
     for (int j = 1; j <= n; j++)
         res.mat[i][j] = (a.mat[i][j] + b.mat[i][j]) % mod;
 return res;
}

Matrix pow(Matrix a , int b) {
 if (b == 0)
     return one;
 Matrix x = pow(a , b / 2);
 if (b % 2 != 0)
     return multi(a , multi(x , x));
 return multi(x , x);
}

Matrix f(Matrix a , int k) {
 if (k == 0)
     return zero;
 if (k % 2 != 0)
     return add(multi(a , f(a , k - 1)) , a);
 Matrix x = f(a , k / 2);
 return add(x , multi(x , pow(a , k / 2)));
}

int main()
{
 ios_base::sync_with_stdio(false);

 cin >> n >> k >> mod;
 for (int i = 1; i <= n; i++) {
     one.mat[i][i] = 1;
     for (int j = 1; j <= n; j++) {
         char c;
         cin >> c;
         if (c == 'Y')
             a.mat[i][j] = 1;
     }
 }

 if (k == 1) {
     cout << 0 << endl;
     return 0;
 }

 Matrix res = f(a , k - 1);
 for (int i = 1; i <= n; i++)
     ans = (ans + res.mat[i][i]) % mod;
 cout << ans << endl;

 return 0;
}