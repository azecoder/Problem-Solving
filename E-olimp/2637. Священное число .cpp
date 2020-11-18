#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int n, k, l, i;
char a[10000];
int main(int argc, char *argv[])
{
   cin >> n;
   k = 1000;
   while( k != n )
   {
       if( k % 2 == 0 && k - n >= n - k / 2 )
       {
           l++;
           k /= 2;
           a[l] = '*';
       }
       else
       {
           l++;
           k += 1;
           a[l] = '-';
       }
   }
   cout << l << endl;
   for( i = l; i >= 1; i-- )
       cout << a[i] << endl;

   return 0;
} 