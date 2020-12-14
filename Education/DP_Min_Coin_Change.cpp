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
    int n, target;
	cin >> n >> target;
    
    vi coins(n);
    for(int &x: coins)
		cin >> x;
	
	vi dp(target+1, INT_MAX);
	dp[0] = 0;
	forr(i, 1, target+1)
	for(int x: coins)
		dp[i] = min(dp[i], (i < x ? 0 : dp[i-x]) + 1);
		
	//cout << "dp: ";
	//for(int x: dp)
		//cout << x << " ";
	//cout << "\n";
		
	cout << dp[target] << "\n";
}


int main() {
	//
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
