#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <memory.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;

int ch[30];
char s[25];
int ss[100000];
ll c[15][15];

int main()
{
  int pos = 27 , cnt = 0;

  for (int i = 0; i <= 10; i++) c[i][0] = c[i][i] = 1;
  for (int i = 1; i <= 10; i++)
      for (int j = 1; j < i; j++)
          c[i][j] = c[i - 1][j] + c[i - 1][j - 1];  
  scanf("%s",s);
  for (int i = 0; i < strlen(s); i++) ch[s[i] - 97]++;
  for (int i = 0; i < 26; i++) {
      if (ch[i] & 1) {
          pos = i;
          cnt++;
      }
  }
  if (cnt > 1) printf("0\n");
  else {
      ch[pos]--; int l = 0;
      for (int i = 0; i < 26; i++) ch[i] /= 2;
      ll ans = 1 , k = strlen(s) / 2;
      for (int i = 0; i < 26; i++) {
          ans *= c[k][ch[i]];
          k -= ch[i];
      }
      cout << ans << endl;
  }
     
 
  return 0;
} 