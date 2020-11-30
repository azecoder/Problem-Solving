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
	int n;
	cin >> n;

	if(n == 1)
		cout << "0\n";
	else if(n == 2)
		cout << "1\n";
	else if(n == 3)
		cout << "2\n";
	else
		cout << 2 + n%2 << "\n";
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
