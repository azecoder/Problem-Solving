#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve() {
	//
	string str;
	cin >> str;
	
	stack<char> s;
	int cnt[2];
	cnt[0] = cnt[1] = 0;
	int result = 0;
	for(char ch: str) {
		if(ch == '(')
			cnt[0]++;
		else if(ch == '[')
			cnt[1]++;
		else if(ch == ')') {
			if (cnt[0])
				result++;
			cnt[0] = max(0, cnt[0]-1);
		} else if(ch == ']') {
			if (cnt[1])
				result++;
			cnt[1] = max(0, cnt[1]-1);
		}
	}
	cout << result << "\n";
	
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
