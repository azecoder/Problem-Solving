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
#define faster_io ios_base::sync_with_stdio(false);cin.tie(NULL)
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
#define getmodule(a) ((a) < 0.0 ? (-a) : (a))
#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define mp make_pair

#define MX (int)(3e5+10)
#define MAXN 1010

#define left_node (cur_node << 1)
#define right_node (left_node | 1)
#define mid ((left + right) >> 1)
#define bit(x,y) ((x >> y) & 1)



using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;
typedef vector <vl> vvl;


#define EPS 1e-6


namespace Triangles {

	typedef struct {

		ld x;
		ld y;
		ld z;

	} point_t;

	ll leq( ld x, ld y ) {

		return ( x <= y + EPS ) || ( x <= y - EPS );

	}

	point_t cross( point_t p1, point_t p2 ) {

		point_t ret;

		ret.x = p1.y * p2.z - p1.z * p2.y;
		ret.y = p1.z * p2.x - p1.x * p2.z;
		ret.z = p1.x * p2.y - p1.y * p2.x;

		return ret;

	}

	ld dot( point_t v1, point_t v2 ) {

		return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;

	}

	point_t mul( point_t p, ld c ) {

		point_t ret;

		ret.x = p.x * c;
		ret.y = p.y * c;
		ret.z = p.z * c;

		return ret;

	}

	point_t add( point_t p1, point_t p2 ) {

		point_t ret;

		ret.x = p1.x + p2.x;
		ret.y = p1.y + p2.y;
		ret.z = p1.z + p2.z;

		return ret;

	}

	point_t sub( point_t p1, point_t p2 ) {

		point_t ret;

		ret.x = p1.x - p2.x;
		ret.y = p1.y - p2.y;
		ret.z = p1.z - p2.z;

		return ret;

	}

	ll sameside( point_t p1, point_t p2, point_t a, point_t b ) {

		point_t c1 = cross( sub( b, a ), sub( p1, a ) );
		point_t c2 = cross( sub( b, a ), sub( p2, a ) );

		ld d = dot( c1, c2 );

		return leq( 0, d );

	}

	bool inside( point_t p, point_t a, point_t b, point_t c ) {

		return sameside( p, a, b, c ) && sameside( p, b, a, c ) && sameside( p, c, a, b );

	}

	inline void run() {

		ll cases;
		cin >> cases;

		point_t points[6];

		while( cases-- ) {

			rep( i, 0, 5 ) {

				cin >> points[i].x >> points[i].y >> points[i].z;

			}

			point_t n1 = cross( sub( points[1], points[0] ), sub( points[2], points[0] ) );

			ll n_in = 0;
			ll n_out = 0;

			rep( i, 3, 5 ) {

				ll j = i < 5 ? ( i + 1 ) : 3;

				point_t lv = sub( points[j], points[i] );

				if ( dot( lv, n1 ) == 0 ) {

					continue;

				}

				ld s = dot( n1, sub( points[0], points[i] ) ) / ( ld ) dot( n1, lv );

				point_t intersect = add( points[i], mul( lv, s ) );

				ll in = inside( intersect, points[0], points[1], points[2] );

				if ( leq( 0, s ) && leq( s, 1 ) ) {

					if ( in ) {

						n_in++;

					} else {

						n_out++;

					}

				}

			}

			cout << ( ( n_in > 0 && n_out > 0 ) ? "YES\n" : "NO\n" );

		}

	}

};



int main() {

	faster_io;

	Triangles::run();

	return 0;

}














