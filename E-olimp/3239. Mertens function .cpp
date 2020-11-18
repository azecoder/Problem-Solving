#include <iostream>
#include <memory.h>
#include <stdio.h>

#define MAXN 10000001
#define MAXL 700001
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;    

int lp[MAXN] , a[MAXL];
char mu[MAXN];

void init() {
  int l = 0;
  for (int i = 2; i < MAXN; i++) {
      if (lp[i] == 0) {
          lp[i] = i;
          a[l++] = i;
      }
      for (int j = 0; j < l && a[j] <= lp[i] && i * a[j] < MAXN; j++)
          lp[i * a[j]] = a[j];
  }
  clr(mu, 48);
  mu[1] = '1';
  for (int i = 2; i < MAXN; i++) {
      int q = i / lp[i];
      if (q % lp[i] != 0)
          mu[i] = mu[q] == '0' ? '0' : (mu[q] == '1' ? '2' : '1');
  }
  for (int i = 1; i < MAXN; i++) lp[i] = mu[i] == '0' ? 0 : (mu[i] == '1' ? 1 : -1);
  for (int i = 2; i < MAXN; i++)
      lp[i] += lp[i - 1];
}

int main()
{
   init();

   int t , n;  
       cin >> t;
   while (t--) {
       cin >> n;
       cout << lp[n] << endl;
   }

  return 0;
} 