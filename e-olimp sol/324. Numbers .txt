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




ll sum ( ll x ) {

	return ( x <= 0 ) ? 0 : x % 10 + sum( x / 10 );

}



ll f( ll x ) {

	if ( x <= 0 ) {

		return 0;

	}

	ll res = x / 10 * 45;
	ll temp = x % 10;

	res = res + 10 * f( x / 10 - 1 ) + ( temp + 1 ) * sum( x / 10 ) + temp * ( temp + 1 ) / 2;

	return res;

}


ll a, b;

int main() {

	faster_io;

	cin >> a >> b;

	cout << f( b ) - f( a - 1 ) << "\n";

	return 0;

}











