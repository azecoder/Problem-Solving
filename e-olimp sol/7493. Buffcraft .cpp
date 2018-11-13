#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <ctime>

/*#include <bits/stdc++.h>*/
#define faster_io ios_base::sync_with_stdio(false);cin.tie()
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define mid ((left + right) / 2)
#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define mp make_pair

#define MX (int)(3e5+10)

#define sag (sol|1)
#define sol (root<<1)
#define mid ((left+right)>>1)
#define bit(x,y) ((x>>y)&1)



using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;




typedef vector<int> vi;

const int inf = int( 1e9 );
const ld eps = ld( 1e-9 );
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define forn(i, n) for (int i = 0; i < (n); i++)





inline void read()
{

	//

}



ll b, k, cd, cp;

inline void solve()
{

	cin >> b >> k >> cd >> cp;

	vll ds( cd ), ps( cp );

	rep( i, 0, cd - 1 ) {

		cin >> ds[i].st;
		ds[i].nd = i;

	}
	rep( i, 0, cp - 1 ) {

		cin >> ps[i].st;
		ps[i].nd = i;

	}

	sort( ds.begin(), ds.end(), greater<pll>() );
	sort( ps.begin(), ps.end(), greater<pll>() );

	vector<ll> sumd( cd + 1 );
	vector<ll> sump( cp + 1 );
	rep( i, 0, cd - 1 ) sumd[i + 1] = sumd[i] + ds[i].first;
	rep( i, 0, cp - 1 ) sump[i + 1] = sump[i] + ps[i].first;

	ll ans = -1;
	ll ad = -1, ap = -1;
	for ( ll cntd = 0; cntd <= cd && cntd <= k; cntd++ ) {

		ll cntp = getmin( k - cntd, cp );

		ll cres = ( b + sumd[cntd] ) * ( 100 + sump[cntp] );
		if ( cres > ans ) {

			ans = cres;
			ad = cntd;
			ap = cntp;

		}

	}

	printf( "%d %d\n", ad, ap );
	rep( i, 0, ad - 1 ) printf( "%s%d", i ? " " : "", ds[i].second + 1 );
	printf( "\n" );
	rep( i, 0, ap - 1 ) printf( "%s%d", i ? " " : "", ps[i].second + 1 );
	printf( "\n" );

}



int main()
{

	faster_io;

	read();
	solve();

	return 0;

}

