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
	
	//if(n == 2) {
		//cout << "3\n";
		//return;
	//}
	
	int x = n * 2;
	
	int sx = sqrt(x);
	int ax = sx + 1;
	
	int summ = ax * sx / 2;
	
	if(summ == n) {
		cout << sx << "\n";
		return;
	}
	
	if(summ > n+1) {
		cout << sx << "\n";
		return;
	}
	
	cout << ax << "\n";
	
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
