#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;


int main(int argc, char *argv[])
{
   int n, m;
   cin >> n >> m;
   int sum = 0, k = 0;
   for(int i = 1; i <= n; i++) {
       sum += i;
       if(sum == m) {
           k = 1;
           break;
       }
   }
   sum = n * (n + 1) / 2;
   if(k == 1)  cout << sum - 1 << endl;
   else cout << sum << endl;

   return EXIT_SUCCESS;
} 