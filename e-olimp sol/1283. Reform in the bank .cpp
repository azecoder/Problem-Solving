#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

typedef long long ll;

int a[7490][5];
int b[5] = {1,5,10,25,50};
int n = 0;

int main()
{
  for (int i = 0; i < 5; i++) a[0][i] = 1;
  for (int i = 1; i <= 7489; i++) {
      for(int j = 0; j < 5; j++) {
          if (j == 0) a[i][j] = 0;
          else a[i][j] = a[i][j - 1];
          if (i - b[j] >= 0)
              a[i][j] += a[i - b[j]][j];
      }
  }
  while (scanf("%d",&n) == 1) {
      printf("%d\n",a[n][4]);
  }
  return 0;
} 