#include <bits/stdc++.h>
 
#define MX 1e4+5
 
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
 
void test_case() {
	
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	int cnt = 0;
	for(int i = 0; i < n - 1; i++)
		if(s[i] == s[i+1])
			cnt++;
	cout << (cnt + 1) / 2 << "\n";
}
 
 
int main() {
	
	int T;
	cin >> T;
	
	while(T--) {
		test_case();
	}
 
	return 0;
}
