#include <iostream>

using namespace std;

long long n, m, maxx = -12, a[52];

int main()
{
   cin >> n;
   for(int i = 1; i <= n; i++) {
       cin >> a[i];
       if(maxx < a[i]) maxx = a[i];
   }
   for(int i = 1; i <= n; i++) {
       while (maxx > a[i]) {
           a[i] *= 2;
       }
       if(maxx != a[i]) {
           cout << "NO" << endl;
           return 0;
       }
   }
   cout << "YES" << endl;

   return 0;
} 