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
	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;
	
	range(i, 0, q) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		
		bool flag = false;
		char last = s[r];
		for(int j = r+1; j < n; j++)
			if(s[j] == last) {
				cout << "YES\n";
				flag = true;
				break;
			}
		if(!flag) {
			char first = s[l];
			for(int j = l-1; j >= 0; j--)
				if(s[j] == first) {
					cout << "YES\n";
					flag = true;
					break;
				}
		}
		if(!flag)
			cout << "NO\n";
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
