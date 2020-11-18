#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 101
#define ull unsigned long long

int a[MAX][MAX];

int main(int argc, char *argv[])
{
int n;
 cin >> n;
 for(int i = 1; i <= n; i ++)
     for(int j = 1; j <= n; j ++)
         cin >> a[i][j];

 for(int i = 1; i <= n; i ++)
     for(int j = 1; j <= n; j ++)
         if(a[i][j] == 1)
             cout << i << " " << j << endl;

  return EXIT_SUCCESS;
}