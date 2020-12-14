#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=a; i<b; i++)
#define rfor(i,a,b) for(int i=a-1; i>=b; i--)

#define MX 1e4+5

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;


vi fArr(40, 0);

int fib(int x) {
	// Fibonacci number, dp
	if(x < 2)
		return x;
	
	if(fArr[x])
		return fArr[x];
	
	int val = fib(x-1) + fib(x-2);
	fArr[x] = val;
	return val;
}

void run_case() {
	//
    int x;
	cin >> x;
    
    cout << fib(x) << "\n";
}


int main() {
	//
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
