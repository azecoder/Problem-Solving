#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

#define MAXN 100002
#define MP make_pair
#define PB push_back

pair <int,int> a[MAXN];
vector <pair<int,int> > v;
vector <int> ans[MAXN];
int ar[MAXN];
set <int> v1;
set <int>::iterator iter;
int n , l = 0;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

   ios_base::sync_with_stdio(false);

   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d %d", &a[i].first, &a[i].second);
       v1.insert(a[i].first);
   }
   for (iter = v1.begin(); iter != v1.end(); iter++)
   {
       ar[l] = *iter;
       v.PB(MP(*iter , l++));
   }
   sort(v.begin() , v.end());
   for (int i = 0; i < n; i++)
   {
       int pos = lower_bound(v.begin() , v.end() , MP(a[i].first , 0)) - v.begin();
       ans[v[pos].second].PB(a[i].second);
   }
   for (int i = 0; i < l; i++)
   {
       for (int j = 0; j < (int)ans[i].size(); j++)
       {
           printf("%d %d\n", ar[i], ans[i][j]);
       }
   }

   return 0;
} 