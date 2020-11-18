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




inline void solve()
{

	int a, b, c, d;
	scanf( "%d %d %d %d", &a, &b, &c, &d );
	int am = 12345, an = 12345;
	for ( int m = a + 1; m <= 4 * 52 * 52; m++ )
		for ( int n = d + 1; n <= 4 * 52 * 52; n++ )
			if ( m * b == n * c )
				if ( ( m * a ) % 2 == 0 && ( n * d ) % 2 == 0 )
					if ( m >= c && n >= b )
						if ( m + n < am + an ) {
							am = m;
							an = n;
						}
	int m = am, n = an;
	printf( "%d %d\n", m, n );
	for ( int i = 1; i <= m; i++ )
		for ( int j = i + 1; j <= i + ( a / 2 ); j++ ) {
			printf( "%d %d\n", i, ( j - 1 ) % m + 1 );
		}
	if ( a % 2 == 1 ) {
		for ( int i = 1; i <= m / 2; i++ ) {
			printf( "%d %d\n", i, m / 2 + i );
		}
	}
	for ( int i = 1; i <= n; i++ )
		for ( int j = i + 1; j <= i + ( d / 2 ); j++ ) {
			printf( "%d %d\n", m + i, m + ( j - 1 ) % n + 1 );
		}
	if ( d % 2 == 1 ) {
		for ( int i = 1; i <= n / 2; i++ ) {
			printf( "%d %d\n", m + i, m + n / 2 + i );
		}
	}
	int id = 0;
	for ( int i = 1; i <= m; i++ )
		for ( int j = 1; j <= b; j++ ) {
			id++;
			if ( id > n ) {
				id = 1;
			}
			printf( "%d %d\n", i, m + id );
		}
		
}



int main()
{

	faster_io;
	
//	read();
	solve();
	
	return 0;
	
}

