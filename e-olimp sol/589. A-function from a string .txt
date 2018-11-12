#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

string s;
int z[1000005];
int n;

void compute_z() {
   int l = 0 , r = 0;
   for (int i = 1; i < n; i++) {
       if (i > r) {
           l = r = i;
           while (r < n && s[r - l] == s[r]) r++;
           z[i] = r - l; r--;
       }
       else {
           int k = i - l;
           if (z[k] < r - i + 1) z[i] = z[k];
           else {
               l = i;
               while (r < n && s[r - l] == s[r]) r++;
               z[i] = r - l; r--;
           }
       }
   }
}

int main()
{
   cin >> n >> s;
   string t = s;
   reverse(t.begin() , t.end());
   s = s + t;
   n *= 2;
   
   compute_z();
   
   for (int i = n - 1; i > n / 2; i--)
       printf("%d ",z[i]);
   cout << z[n / 2] << endl;
   
   return 0;
} 