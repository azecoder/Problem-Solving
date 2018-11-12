#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#define ll long long

ll n,k,t;

int main() {
   
   cin >> n;
   for(k = 1; k <= 32; k++) {
       t = (pow(2, k+1) - 1) * (k + 1) + k;
       if(t >= n)  break;
       }
   if(n == 1) k = 0;
   
   cout << k << endl;
   
   return 0;
} 