#include <iostream>
#include <set>

using namespace std;

set<int> myset;
int n , k , x;

int main()
{
  ios_base::sync_with_stdio(false);

  cin >> n;
  for (int i = 1; i <= n; i++) {
      cin >> k;
      for (int j = 1; j <= k; j++) {
          cin >> x;
          myset.insert(x);
      }
  }
  cout << myset.size() << endl;

  return 0;
} 