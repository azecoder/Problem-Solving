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
typedef vector <vl> vvl;





ll diff( ll c[], ll m, ll n )
{

	sort( c, c + n );
	ll prev = 0;
	ll maxx = 0;

	rep( i, 0, n - 1 ) {

		maxx = getmax( maxx, c[i] - prev - 1 );
		prev = c[i];

	}

	return getmax( maxx, m - prev );

}


ll w, h, n;
ll x[MX], y[MX];

inline void solve()
{

	cin >> w >> h >> n;

	rep( i, 0, n - 1 ) {

		cin >> x[i] >> y[i];

	}

	cout << diff( x, w, n ) * diff( y, h, n ) << "\n";

}



int main()
{

	faster_io;

//	read();
	solve();

	return 0;

}

