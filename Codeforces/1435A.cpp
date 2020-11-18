#include <bits/stdc++.h>
 
#define MX 1e4+5
 
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
 
void test_case() {
	
	int n;
	cin >> n;
	vi a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i+=2) {
		int x = a[i+1];
		int v = -1 * a[i];
		cout << x << " " << v << " ";
	}
	cout << "\n";
 
}
 
 
int main() {
	
	int T;
	cin >> T;
	
	while(T--) {
		test_case();
	}
 
	return 0;
}
