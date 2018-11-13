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




namespace Strahler_Order {

	ll go( void ) {
	
		ll k, m, p;
		cin >> k >> m >> p;
		
		vvl r( m + 1 );
		
		rep( j, 1, p ) {
		
			ll a, b;
			cin >> a >> b;
			
			r[b].pb( a );
			
		}
		
		vl order( m + 1, 0 );
		
		rep( i, 1, m ) {
		
			if ( sz( r[i] ) == 0 ) {
			
				order[i] = 1;
				
			}
			
		}
		
		while ( order[m] == 0 ) {
		
			rep( i, 1, m ) {
			
				if ( order[i] == 0 && sz( r[i] ) > 0 ) {
				
					ll seen_zero = 0;
					ll max_order = 0;
					ll num_max = 0;
					
					repv( j, r[i] ) {
					
						ll node = r[i][j];
						
						if ( order[node] == 0 ) {
						
							seen_zero = true;
							
						}
						
						if ( order[node] == max_order ) {
						
							++num_max;
							
						}
						
						if ( order[node] > max_order ) {
						
							max_order = order[node];
							num_max = 1;
							
						}
						
					}
					
					if ( !seen_zero ) {
					
						if ( num_max >= 2 ) {
						
							order[i] = max_order + 1;
							
						} else {
						
							order[i] = max_order;
							
						}
						
					}
					
				}
				
			}
			
		}
		
		return order[m];
		
	}
	
	ll num;
	
	inline void run() {
	
		cin >> num;
		
		rep( i, 1, num ) {
		
			ll order = go();
			cout << i << " " << order << endl;
			
		}
		
	}

};



int main() {

	faster_io;

	Strahler_Order::run();

	return 0;

}

