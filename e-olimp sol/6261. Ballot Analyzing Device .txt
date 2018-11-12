#include <stdio.h>
#include <set>
#include <map>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get(int from, int total) {
  int p = 10000 * from;
  int q = total;
  return (p / q) + (2 * (p % q) >= q);
}

string name[42];
int cnt[42], num[42];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) cin >> name[i];
  for (int i = 0; i < n; i++) cnt[i] = 0;
  int inv = 0;
  for (int i = 0; i < m; i++) {
    string vote;
    cin >> vote;
    int who = -1;
    for (int j = 0; j < n; j++)
      if (vote[j] == 'X')
        if (who == -1) who = j;
        else who = -2;
    if (who >= 0) cnt[who]++;
    else inv++;
  }
  for (int i = 0; i < n; i++) num[i] = i;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (cnt[i] < cnt[j] || cnt[i] == cnt[j] && num[i] > num[j]) {
        int tmp;
        tmp = cnt[i]; cnt[i] = cnt[j]; cnt[j] = tmp;
        tmp = num[i]; num[i] = num[j]; num[j] = tmp;
      }
  for (int i = 0; i < n; i++) {
    int per = get(cnt[i], m);
    cout << name[num[i]] << " " << per / 100 << "." << per / 10 % 10 << per % 10 << "%" << endl;
  }
  int per = get(inv, m);
  cout << "Invalid " << per / 100 << "." << per / 10 % 10 << per % 10 << "%" << endl;
  return 0;
}