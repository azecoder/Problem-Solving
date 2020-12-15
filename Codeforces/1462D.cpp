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

	vi a(n);
	int sum = 0;
	for(int &x: a) {
		cin >> x;
		sum += x;
	}
	
	int ans = n - 1;

	//int ln = sqrt(sum);
	forr(i, 1, sum+1) {
		if(sum%i)
			continue;
		
		int lim = sum / i;
		int sum2 = 0;
		int idx = 0;
		while(sum2 < lim && idx < n) {
			sum2 += a[idx];
			if(sum2 > lim)
				break;
			else if(sum2 == lim)
				sum2 = 0;
			idx++;
		}
		if(sum2 == 0)
			ans = n - i;
	}
	
	cout << ans << "\n";
}


int main() {
	//
    ios::sync_with_stdio(false);
 
    int tests;
    cin >> tests;
 
    while (tests-- > 0)
        run_case();
}
