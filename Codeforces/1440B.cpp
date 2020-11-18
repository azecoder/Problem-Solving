#include <bits/stdc++.h>

#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;


void solve() {
	//
	int n, k;
	cin >> n >> k;
	
	int ll = n * k;
	vi a(ll);
	for(int i = 0; i < ll; i++)
		cin >> a[i];

	
	if(n <= 2) {
		long long sum = 0;
		for(int i = 0; i < ll; i += n)
			sum += a[i];
		cout << sum << "\n";
		return;
	}
	
	int ss = int(n / 2) + n % 2 - 1;
	int bb = n - ss;
	
	//cout << "sb: " << ss << " - " << bb << "\n";
	
	long long sum = 0;
	for(int i = ss * k; i < ll; i += bb) {
		//cout << "x: " << a[i] << "\n";
		sum += a[i];
	}
	
	cout << sum << "\n";
}


int main() {
	
	int T;	
	cin >> T;
	while(T--)
		solve();

	return 0;
}
