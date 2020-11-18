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
#define minnd ((left + right) / 2)
#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define mp make_pair

#define MX (int)(3e5+10)

#define sag (sol|1)
#define sol (root<<1)
#define minnd ((left+right)>>1)
#define bit(x,y) ((x>>y)&1)



using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;
typedef vector <vl> vvl;


const int MAXN = 5000;

ll m, n, s, k;
char a[MAXN + 1];


inline void solve()
{

	cin >> m >> n >> s >> k >> a;

	ll minn = n;
	ll maxx = -1;
	ll sum = 0;

	rep(i, 0, n - 1) {

		if ( a[i] == '*' ) {

			sum++;
			if ( i < minn ) {

				minn = i;

			}

			if ( i > maxx ) {

				maxx = i;

			}

		}

	}

    ll cnt = 0;

	if ( sum == 0 ) {

		cnt = ( getmax( 0, k - s ) + getmax( 0, m - k - s + 1 ) ) * getmax( 0, n - s + 1 );

	} else if ( sum != maxx - minn + 1 || sum != s ) {

		cnt = 0;

	} else {

		cnt = getmax( 0, getmin( m - s + 1, k ) - getmax( 1, k - s + 1 ) + 1 );

	}

	if ( cnt == 0 ) {

		puts( "Impossible" );

	} else if ( cnt == 1 ) {

		puts( "Unique" );

	} else {

		puts( "Ambiguous" );

	}

}



int main()
{

	faster_io;

//	read();
	solve();

	return 0;

}

