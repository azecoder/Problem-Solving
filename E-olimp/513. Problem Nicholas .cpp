#include <iostream>
#define LL long long

using namespace std;
LL i, n, m, cvb = 1;
int main()
{
  cin >> n >> m;

  if(n > m)   cout << "0" << endl;
  else{
      for(i = 1; i <= n; i ++){
         cvb *= i;
         cvb %= m;
      }

      cout << cvb << endl;
  }

  return 0;
} 