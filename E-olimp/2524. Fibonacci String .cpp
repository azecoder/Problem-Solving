#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

using namespace std;

int fibo[46];
void initial() {
   fibo[0] = fibo[1] = 1;
   for(int i = 2; i <= 45; i++)
       fibo[i] = fibo[i-1] + fibo[i-2];
}

char findchar(int n, int m) {
   if(n == 0)
       return 'a';
   if(n == 1)
       return 'b';
   if(m <= fibo[n - 2])
       return findchar(n-2, m);
   return findchar(n-1, m-fibo[n-2]);
}

void find(int n, int m) {
   cout << findchar(n, m) << endl;
}


int T;
int main() {
   initial();
   cin >> T;
   while(T--) {
       int n, k;
       cin >> n >> k;
       find(n, k);
   }
   return 0;
}