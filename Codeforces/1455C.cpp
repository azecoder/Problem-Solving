#include <bits/stdc++.h>

#define range(a,b,c) for(int a=b; a<c; a++)
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
	
	int df = 0;
	if(v)
		df = 1;

	cout << max(0, x - df) << " " << v << "\n";
	
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
