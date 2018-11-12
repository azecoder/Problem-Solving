#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

typedef long long ll;

int a[500][500];
string s , f;
int n , m;

int main()
{
  getline(cin,s);
  getline(cin,f);
  for (int i = 0; i < s.length(); i++)
     if(s[i] == '*' || s[i] == '?') {
          swap(s,f);
          break;
      }
  n = s.length(); m = f.length();

  a[0][0] = 1;
  for (int i = 1; i <= m; i++) {
      if (f[i - 1] == '*')
          a[i][0] = 1;
      else break;
  }
  for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
          if (f[i - 1] == '*') {
              if (a[i - 1][j] || a[i][j - 1] || a[i - 1][j - 1])
                  a[i][j] = 1;
              else a[i][j] = 0;
          }
          else {
              if (f[i - 1] == '?') a[i][j] = a[i - 1][j - 1];
              else if (s[j - 1] == f[i - 1]) a[i][j] = a[i - 1][j - 1];
          }
      }
  }
  if (a[m][n]) cout<<"YES\n";
  else cout<<"NO\n";

  return 0;
} 