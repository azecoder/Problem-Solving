#include <stdio.h>
#include <set>
#include <map>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

char s[1234567];

int main() {
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  int ones = 0, twos = 0;
  long long ans = 0;
  int p = 0;
  while (s[p]) {
    if (s[p] == '1') {
      if (ones + 2 * twos < n) {
        ones++;
      } else
      if (twos > 0) {
        twos--;
        ones++;
      }
    } else
    if (s[p] == '2') {
      if (ones + 2 * twos < n - 1) {
        twos++;
      }
    }
    ans += (ones + twos);
    p++;
  }
  cout << ans << endl;
  return 0;
}