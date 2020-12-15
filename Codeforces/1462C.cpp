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
    int n;
	cin >> n;

	if(n < 10) {
		cout << n << "\n";
		return;
	}
	
	if(n == 45) {
		cout << "123456789\n";
		return;
	}
	
	if(n > 45) {
		cout << "-1\n";
		return;
	}
	
	int x = n;
	int num = 9;
	while(x >= num) {
		x -= num--;
	}
	//cout << "inf: " << x << " " << num << "\n";
	if(x)
		cout << x;
	forr(i, num + 1, 10)
		cout << i;
	cout << "\n";
}


int main() {
	//
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
