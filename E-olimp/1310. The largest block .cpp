#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

char s[1000010];
int z[1000010];
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
           if (z[k] < (r - i + 1)) z[i] = z[k];
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
   gets(s);
   n = strlen(s);
   
   compute_z();
   
   int ans = 0;
   for (int i = 1; i < n; i++)
       ans = max(ans , z[i]);
   cout << ans << endl;
   
   return 0;
} 