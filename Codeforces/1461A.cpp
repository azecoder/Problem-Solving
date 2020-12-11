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
	
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < k; i++)
		cout << 'c';
	for(int i = 0; i < n - k; i++)
		cout << char('a' + i%3);
	cout << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
