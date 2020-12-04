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


long maxx(long a, long b) {
	if(a > b)
		return a;
	return b;
}


void run_case() {
	
	int n;
	cin >> n;
	
	vi a(n);
	rep(i, n)
		cin >> a[i];
		
	if(n == 2) {
		cout << "0\n";
		return;
	}
	
	vi diff2(n+1, 0);
	diff2[0] = 0;
	range(i, 0, n-1)
		diff2[i+1] = abs(a[i + 1] - a[i]);
	diff2[n] = 0;
	
	vi diff3(n, 0);
	diff3[0] = 0;
	range(i, 0, n - 2)
		diff3[i+1] = abs(a[i + 2] - a[i]);
	diff3[n-1] = 0;
	
		
	//cout << "diff2: ";
	//for(int x: diff2)
		//cout << x << " ";
	//cout << "\n";
	//cout << "diff3: ";
	//for(int x: diff3)
		//cout << x << " ";
	//cout << "\n";
		
	long mx = -1;
	long sum = 0;
	range(i, 0, n-1) {
		sum += diff2[i+1];
		long x = diff2[i] + diff2[i+1];
		mx = maxx(mx, abs(x-diff3[i]));
	}
	
	//cout << "sum: " << sum << " " << mx << "\n";
	
	cout << sum - mx << "\n";
	
}

int main() {
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
