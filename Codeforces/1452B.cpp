#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve() {
	//
	int n;
	cin >> n;
	
	vi a(n);
	int sum = 0;
	int mx = INT_MIN;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		mx = max(mx, a[i]);
	}
		
	sum -= mx;
	int x = sum / mx;
	x++;
	//cout << "x: " << x << " " << mx << " " << sum << "\n";
	
	cout << (x * mx - sum) % (n-1) << "\n";
	
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
