#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve() {
	//
	int x, v;
	cin >> x >> v;
	
	int mn = min(x, v);
	int mx = max(x, v);
	
	if(mn < mx - 1)
		mn = mx - 1;
	cout << mn + mx << "\n";
}


int main() {
	//
	ios_base::sync_with_stdio(false);
	int T;	
	cin >> T;
	while(T--)
		solve();

	return 0;
}
