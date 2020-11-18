    #include <bits/stdc++.h>
     
    #define MX 1e4+5
     
    using namespace std;
     
    typedef pair<int, int> pii;
    typedef vector<int> vi;
    typedef vector<pii> vii;
     
     
    void test_case() {
    	
    	int x, y;
    	cin >> x >> y;
    	cout << (2 * x > y ? "YES\n" : "NO\n");
    }
     
     
    int main() {
    	
    	int T;
    	cin >> T;
    	
    	while(T--) {
    		test_case();
    	}
     
    	return 0;
    }
