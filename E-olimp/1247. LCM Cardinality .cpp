#include <iostream>
#include <vector>
#include <cmath>

#define MAXN 20000009

using namespace std;

#define LL long long
#define PB push_back

vector <LL> div;

LL  GCD(LL a , LL b)
{
   return !b ? a : GCD(b , a % b);
}

int f(LL n)
{
   div.clear();
   int m = sqrt(n * 1.0);

   for (int i = 1; i <= m; i++)
       if (n % i == 0)
       {
           div.PB(i);
           if (i * i != n) div.PB(n / i);
       }
   int ans = 0;
   int len = div.size();
   for (int i = 0; i < len; i++)
       for (int j = i; j < len; j++)
           if (div[i] * div[j] / GCD(div[i], div[j]) == n)
               ans++;
   return ans;
}

int main()
{
   LL n;
   while (cin >> n && n != 0)
       cout << n << " " << f(n) << endl;
   return 0;
} 