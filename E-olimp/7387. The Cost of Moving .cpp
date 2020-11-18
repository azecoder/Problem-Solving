#include <iostream>
#include <algorithm>
#include <memory.h>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>
/*
programmjs944459
*/

#define MAXN 1010
#define fr first
#define sc second
#define pb push_back
#define mk make_pair

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll , ll> pl;

pair<string,int> ar[MAXN];
int n;

int abs(int x) {
   return x >= 0 ? x : -x;
}

int main()
{
   /*
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   */
   ios_base::sync_with_stdio(false);
   cin.tie();

   for(int site = 1;;++site) {
       cin >> n;
       if (n == 0) break;
       for (int i = 0; i < n; ++i) {
           cin >> ar[i].fr;
           ar[i].sc = i;
       }
       sort(ar , ar + n);
       int ans = 0;
       for (int i = 0; i < n; ++i) {
           ans += abs(ar[i].sc - i);
       }
       cout << "Site " << site << ": " << ans << endl;
   }


   return 0;
} 