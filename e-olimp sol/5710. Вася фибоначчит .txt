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

#define size 301
#define ull unsigned long long
ull fib[size];

int main(int argc, char *argv[])
{
   ull n;
   while(cin >> n)
   {
       n%=300;
       fib[0] = fib[1] = 1;
       for(int i = 2; i <= n; i++)
       {
           fib[i] = (fib[i-1] + fib[i-2])%100;
       }
       cout << (fib[n]%100/10)+(fib[n]%10) << endl;
   }
   
   return EXIT_SUCCESS;
}