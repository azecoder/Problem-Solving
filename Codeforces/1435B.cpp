#include <bits/stdc++.h>
 
#define MX 1e4+5
 
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vector<int>> vvi;
 
 
 
void test_case() {
	
	int n, m;
	cin >> n >> m;
	
	vvi row(n, vi(m));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> row[i][j];
			
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++) {
			int x; cin >> x;
			row[j][i] = x;
		}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			cout << row[i][j] << " ";
		cout << "\n";
	}
		
}
 
 
int main() {
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
 
	return 0;
}
