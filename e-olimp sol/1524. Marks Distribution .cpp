#include <iostream>

#define LL long long

using namespace std;

LL n, t, p, ans = 0;

LL fac(LL v, LL y) {
   LL fact = 1;
   for(LL i = v; i <= y; i++)
       fact *= i;
   return fact;
}

int main()
{
   LL T;
   cin >> T;
   while(T--) {
       cin >> n >> t >> p;
       LL x = t - n*p;
       if(x > n-1)
           cout << fac(x+1, x+n-1) / fac(2, n-1) << endl;
       else
           cout << fac(n, x+n-1) / fac(2, x) << endl;
   }
   return 0;
} 