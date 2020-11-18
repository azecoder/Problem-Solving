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

#define EPS 1.0E-3



#define MAX 220


ll n;
ll m[MAX][MAX];

ll minx = 220, miny = 220;
ll p = 0, maxx = 0, maxy = 0;

ll a, b;

int main() {

	faster_io;
	
	cin >> n;
	
	clr( m, 0 );
	
	rep( i, 1, n ) {
	
		cin >> a >> b;
		
		a += 110;
		b += 110;
		
		m[a][b] = 1;
		
		if ( a < minx ) minx = a;
		if ( a > maxx ) maxx = a;
		
		if ( b < miny ) miny = b;
		if ( b > maxy ) maxy = b;
		
	}
	
	rep( i, 1, MAX - 2 ) {
	
		rep( j, 1, MAX - 2 ) {
		
			if ( m[i][j] ) {
			
				if ( m[i - 1][j] == 0 ) p++;
				
				if ( m[i + 1][j] == 0 ) p++;
				
				if ( m[i][j + 1] == 0 ) p++;
				
				if ( m[i][j - 1] == 0 ) p++;
				
			}
			
		}
		
	}
	
	a = maxx - minx + 1;
	b = maxy - miny + 1;
	
	ll pp = 2 * ( a + b );
	ll res = a * b - n;
	ll temp;
	
	while( pp < p ) {
	
		if ( a > b ) {
		
			temp = a;
			a = b;
			b = temp;
			
		}
		
		res += b;
		pp += 2;
		a++;
		
	}
	
	cout << res << "\n";
	
	return 0;
	
}












