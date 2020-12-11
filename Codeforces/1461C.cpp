#include <bits/stdc++.h>

#define rep(i,a) for(int i=0; i<a; i++)
#define rrep(i,a) for(int i=a-1; i>=0; i--)
#define range(i,a,b) for(int i=a; i<b; i++)
#define rrange(i,a,b) for(int i=a-1; i>=b; i--)

#define ll long long
#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;


void run_case() {
	
	int n, m;
	cin >> n >> m;
	
	vi a(n);
	for(int i =0; i < n; i++)
		cin >> a[i];

	int idx = n - 1;
	while(idx > 0) {
		if(idx + 1 != a[idx])
			break;
		idx--;
	}

	double ans = 1.0;
	for(int ii = 0; ii < m; ii++) {
		int d;
		double r;
		cin >> d >> r;
		
		if(d > idx)
			ans *= (1.0 - r);
	}
		
	if(idx == 0) {
		cout << "1.000000\n";
		return;
	}
	
	cout.precision(6);
	cout << fixed << 1.0 - ans << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
