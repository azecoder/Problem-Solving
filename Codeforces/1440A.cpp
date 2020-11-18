#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;


void solve() {
	//
	int n, c0, c1, h;
	cin >> n >> c0 >> c1 >> h;
	
	string s;
	cin >> s;
	
	int cnt1 = 0;
	for(char ch: s) {
		if(ch == '1')
			cnt1++;
	}
	int cnt0 = n - cnt1;
	
	int price0 = cnt1 * h + n * c0;
	int price1 = cnt0 * h + n * c1;
	int price2 = cnt0 * c0 + cnt1 * c1;
	cout << min(min(price0, price1)) << "\n";
}


int main() {
	
	int T;	
	cin >> T;
	while(T--)
		solve();

	return 0;
}
