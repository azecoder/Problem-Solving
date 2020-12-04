#include <bits/stdc++.h>

#define rep(i,a) for(int i=0; i<n; i++)
#define rrep(i,a) for(int i=a-1; i>=0; i--)
#define range(i,a,b) for(int i=a; i<b; i++)
#define rrange(i,a,b) for(int i=a-1; i>=b; i--)
#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;


void run_case() {
	
	int n, m;
	cin >> n >> m;
	
	vi a(101, 0);
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x]++;
	}
	for(int i = 0; i < m; i++) {
		int x;
		cin >> x;
		a[x]++;
	}
	int result = 0;
	for(int i = 1; i <= 100; i++)
		if(a[i] == 2)
			result++;
	cout << result << "\n";
		
}

int main() {
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
