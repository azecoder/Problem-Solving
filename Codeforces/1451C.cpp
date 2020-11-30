#include <bits/stdc++.h>

#define range(a,b,c) for(int a=b; a<c; a++)
#define MX 1e4+5

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<vi> vvi;




void solve() {
	//
	int n, k;
	cin >> n >> k;

	string a;
	cin >> a;
	
	vi ac(26, 0);
	for(char ch: a) {
		int i = int(ch - 'a');
		ac[i]++;
	}
	
	string b;
	cin >> b;
	
	vi bc(26, 0);
	for(char ch: b) {
		int i = int(ch - 'a');
		bc[i]++;
	}
	
	vi have(n, 0);
	range(i, 0, n) {
		int id = int(b[i] - 'a');
		if(ac[id]) {
			ac[id]--;
			have[i] = 1;
		}
	}
	
	range(i, 0, n) {
		if(have[i])
			continue;
		
		char ch = b[i];
		//cout << "ch: " << i << " " << ch << " \n"; 
		int id = int(b[i] - 'a');
		range(j, i+1, i+k) {
			if(ch != b[j]) {
				//cout << "bj " << j << " " << b[j] << "\n";
				cout << "No\n";
				return;
			}
		}
		
		range(j, 0, id+1) {
			if(ac[j] >= k) {
				cout << "salam: " << a[j] << "\n";
				ac[j] -= max(0,k);
				range(ii, i, i+k)
					have[ii] = 1;
			}
		}
		
		cout << "HV: ";
		for(int x: have)
			cout << x << " ";
		cout << "\n";
	}
	
	cout << "AC: ";
	for(int x: ac)
		cout << x << " ";
	cout << "\n";
	
	cout << "HV: ";
	for(int x: have)
		cout << x << " ";
	cout << "\n";
	
	cout << "Yes\n";
	return;
	
}


int main() {
	//
	ios_base::sync_with_stdio(false);
	int T;	
	cin >> T;
	while(T--)
		solve();

	return 0;
}
