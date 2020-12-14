#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=a; i<b; i++)
#define rfor(i,a,b) for(int i=a-1; i>=b; i--)
#define pb push_back

#define MX 1e4+5

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;



void run_case() {
	//
    int n, m;
	cin >> n >> m;
    
    vvi a;
    forr(i, 0, n) {
		vi la(m);
		forr(j, 0, m)
			cin >> la[j];
		a.pb(la);
	}
	
	vvi dp(n, vi(m, 0));
	dp[0][0] = a[0][0];
	forr(i, 1, m)
		dp[0][i] = dp[0][i-1] + a[0][i];
	forr(i, 1, n)
		dp[i][0] = dp[i-1][0] + a[i][0];
	
	forr(i, 1, n)
	forr(j, 1, m)
		dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + a[i][j];
	
	cout << "dp\n";
	for(vi idp: dp) {
		for(int x: idp)
			cout << x << " ";
		cout << "\n";
	}
	
	cout << dp[n-1][m-1] << "\n";
}


int main() {
	//
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
