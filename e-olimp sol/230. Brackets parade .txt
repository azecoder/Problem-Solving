#include <bits/stdc++.h>

#define faster_io ios_base::sync_with_stdio(false);cin.tie(NULL)

#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

#define clr(a,b) memset((a), (b), sizeof(a))

#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef long double ld;

#define MD 1000000007

#define MAX 1001

ll k[MAX], cat[MAX];

ll cnk[MAX][MAX];


ll c( ll n, ll k ) {

	if ( cnk[n][k] > 0 ) {

            return cnk[n][k];

      }

      if ( n - k < k ) {

            return c( n, n - k );

      }

	if ( !k ) {

            return cnk[n][k] = 1;

      }

	return cnk[n][k] = ( c( n - 1, k ) + c( n - 1, k - 1 ) ) % MD;

}

ll n, m;
ll res = 0;

int main() {

	faster_io;

	cat[0] = cat[1] = 1;

      rep(i, 2, 1000) {

            rep(j, 0, i - 1) {

			cat[i] = ( cat[i] + cat[j] * cat[i - j - 1] ) % MD;

            }

	}

      cin >> n;

	while( n-- ) {

            cin >> m;

            ll s = 0;
            rep(i, 1, m) {

                  cin >> k[i];
                  s += k[i];

            }

		res = cat[s];

            rep(i, 1, m) {

			res = ( res * c( s, k[i] ) ) % MD;
			s -= k[i];

            }

            cout << res << "\n";

	}

	return 0;

}











