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


ll test;
ll n, val;
char ch;

int main() {

	faster_io;

	cin >> test;

	while( test-- ) {

            cin >> n;

		ll res = 0;
		rep(i, 1, n) {

                  cin >> val >> ch;

			ll cnt = 0;
			while( cin >> val, val != 0 ) cnt++;

			res += 6 - cnt;

		}

		cout << res << "\n";

	}

	return 0;

}











