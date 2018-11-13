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

#define MAXN 100100
#define fr first
#define sc second
#define pb push_back
#define mk make_pair
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll , ll> pl;


ll t[MAXN] , t2[MAXN];
int n , a[MAXN];

void add(int id) {
   while (id < MAXN) {
       t[id]++;
       id += id & (-id);
   }
}

ll get_sum(int id) {
   ll sum = 0;
   while (id > 0) {
       sum += t[id];
       id -= id & (-id);
   }
   return sum;
}

void add2(int id , ll x) {
   while (id < MAXN) {
       t2[id] += x;
       id += id & (-id);
   }
}

ll get_sum2(int id) {
   ll sum = 0;
   while (id > 0) {
       sum += t2[id];
       id -= id & (-id);
   }
   return sum;
}

int main()
{
   /*
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   */
   ios_base::sync_with_stdio(false);
   cin.tie();


   cin >> n;
   for (int i = 0; i < n; ++i) {
       cin >> a[i];
   }
   ll ans = 0;
   for (int i = n - 1; i >= 0; i--) {
       ll x = get_sum(a[i] - 1);
       add2(a[i] , x);
       ans += get_sum2(a[i] - 1);
       add(a[i]);
   }
   cout << ans << endl;



   return 0;
} 