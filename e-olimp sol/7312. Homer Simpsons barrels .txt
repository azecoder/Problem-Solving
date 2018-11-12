#include <iostream>
#include <algorithm>
#include <set>

#define MAXN 1000010
#define f first
#define s second
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int,int> pr;

set<pr> S[1001];
set<pr>::const_iterator it;
int cap[MAXN] , type[MAXN];
int n , l , q;

int main()
{
  ios_base::sync_with_stdio(false);

  cin >> n >> l >> q;
  for (int i = 1; i <= n; i++) cin >> cap[i];
  for (int i = 1; i <= n; i++) {
      cin >> type[i];
      S[type[i]].insert(pr(cap[i],i));
  }

  while (q--) {
      int ty , vl;
      cin >> ty >> vl;
      it = S[ty].upper_bound(pr(vl,0));
      int ans = -1;
      if (it != S[ty].end())
          ans = it->s;
      if (ans != -1) {
          cap[ans] -= vl;
          pr _new(it->f - vl , it->s);
          S[ty].erase(it);
          S[ty].insert(_new);
      }
      cout << ans << endl;
  }

  return 0;
} 