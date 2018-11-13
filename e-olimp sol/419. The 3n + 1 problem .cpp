#include <iostream>
#include <cstdio>
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
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;

int main ()
{
   int i, j;

   while ( scanf ("%d %d", &i, &j) != EOF ) {

       int temp_i = i;
       int temp_j = j;

       if ( i > j ) swap (i, j);

       int max_cycle_length = 0;
       int cycle_length;

       while ( i <= j ) {
           int n = i;
           cycle_length = 1;

           while ( n != 1 ) {
               if ( n % 2 == 1 ) n = 3 * n + 1;
               else n /= 2;
               cycle_length++;
           }

           if ( cycle_length > max_cycle_length )
               max_cycle_length = cycle_length;

           i++;
       }

       printf ("%d %d %d\n", temp_i, temp_j, max_cycle_length);
   }

   return 0;
}