#include <bits/stdc++.h>

#define FOR(i, b, e, s) for(int i=(b); (s)>0?i<(e):i>(e); i+=(s)) 
#define FOR1(e) FOR(i, 0, e, 1)
#define FOR2(i, e) FOR(i, 0, e, 1)
#define FOR3(i, b, e) FOR(i, b, e, 1)
#define FOR4(i, b, e, s) FOR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define FORC(...) GET5(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)
#define range(...) FORC(__VA_ARGS__)(__VA_ARGS__)
#define each(x, a) for (auto& x: a)

#define vk vector
#define st first
#define nd second
#define pb push_back
#define mp make_pair

using namespace std;

template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
template<class A> void read(vk<A>& x) {
	each(a, x)
		read(a);
}

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;

const int MOD = 1e9+7;





void solve() {
	//
	int n;
	read(n);
	
	vi odd, even;
	range(i, n) {
		int x;
		read(x);
		if(x%2)
			odd.pb(x);
		else
			even.pb(x);
	}
	
	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end());
	
	int lo = int(odd.size()) - 1;
	int le = int(even.size()) - 1;
	
	int ind = 0;
	ll even_sum = 0, odd_sum = 0;
	while(lo >= 0 && le >= 0) {
		ind++;
		if(ind%2) {
			if(even[le] > odd[lo])
				even_sum += 1ll * even[le--];
			else
				lo--;
		} else {
			if(odd[lo] > even[le])
				odd_sum += 1ll * odd[lo--];
			else
				le--;
		}
	}
	//cout << "os: " << odd_sum << " : es: " << even_sum << "\n"; 
	if(lo == -1) {
		while(le >= 0) {
			ind++;
			if(ind%2)
				even_sum += 1ll * even[le];
			le--;
		}
	} else {
		while(lo >= 0) {
			ind++;
			if(ind%2 == 0)
				odd_sum += 1ll * odd[lo];
			lo--;
		}
	}
	//cout << "os: " << odd_sum << " : es: " << even_sum << "\n";
	cout << (odd_sum == even_sum ? "Tie" : (odd_sum > even_sum ? "Bob" : "Alice")) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
		
	int tests;
	read(tests);
 
	range(tests)
		solve();
}
