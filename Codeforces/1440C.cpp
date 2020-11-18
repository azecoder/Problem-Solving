#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve2(int i, int j, int isign, int jsign, vector<vii> &result) {
	vii ll;
	ll.push_back({i, j});
	ll.push_back({i+isign, j});
	ll.push_back({i+isign, j+jsign});
	result.push_back(ll);
	ll.clear();
	ll.push_back({i+isign, j+jsign});
	ll.push_back({i, j+jsign});
	ll.push_back({i, j});
	result.push_back(ll);
	ll.clear();
	ll.push_back({i+isign, j});
	ll.push_back({i, j});
	ll.push_back({i, j+jsign});
	result.push_back(ll);
	ll.clear();
}

void solve() {
	//
	int n, m;
	cin >> n >> m;
	
	vector<vi> a;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		
		vi ll;
		for(char ch: s)
			ll.push_back(int(ch-'0'));
		a.push_back(ll);
	}
	
	vector<vii> result;
	// remove all possible 3-ones in each 2x2 square
	for(int i = 0; i < n-1; i++)
	for(int j = 0; j < m-1; j++) {
		int count1 = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
		if(count1 == 3) {
			vii ll;
			for(int ii = 0; ii <= 1; ii++)
			for(int jj = 0; jj <= 1; jj++)
				if(a[i+ii][j+jj])
					ll.push_back({i+ii, j+jj});
			result.push_back(ll);
			a[i][j] = a[i][j+1] = a[i+1][j] = a[i+1][j+1] = 0;
		} else if(count1 == 4) {
			vii ll;
			ll.push_back({i, j});
			ll.push_back({i, j+1});
			ll.push_back({i+1, j});
			result.push_back(ll);
			a[i][j] = a[i][j+1] = a[i+1][j] = 0;
		}
	}
	
	// solve for 1 or 2 ones in 2x2 square
	for(int i = 0; i < n-1; i++)
	for(int j = 0; j < m-1; j++) {
		int count1 = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
		if(count1 == 1) {
			if(a[i][j]) {
				a[i][j] = 0;
				solve2(i, j, 1, 1, result);
			} else if(a[i][j+1]) {
				a[i][j+1] = 0;
				solve2(i, j+1, 1, -1, result);
			} else if(a[i+1][j]) {
				a[i+1][j] = 0;
				solve2(i+1, j, -1, 1, result);
			} else if(a[i+1][j+1]) {
				a[i+1][j+1] = 0;
				solve2(i+1, j+1, -1, -1, result);
			}
		} else if(count1 == 2) {
			vii l0, l1;
			for(int ii = 0; ii <= 1; ii++)
			for(int jj = 0; jj <= 1; jj++)
				if(a[i+ii][j+jj]) {
					l1.push_back({i+ii, j+jj});
					a[i+ii][j+jj] = 0;
				} else
					l0.push_back({i+ii, j+jj});
			l1.push_back(l0[0]);
			result.push_back(l1);
			int isign = -1, jsign = -1;
			if(l0[0].first == 0)	isign = 1;
			if(l0[0].second == 0)	jsign = 1;
			solve2(l0[0].first, l0[0].second, isign, jsign, result);
		}
	}
	
	cout << result.size() << "\n";
	for(vii lres: result) {
		for(pii x: lres)
			cout << x.first+1 << " " << x.second+1 << " ";
		cout << "\n";
	}
	
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
