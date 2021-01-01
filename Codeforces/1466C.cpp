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

const int MX = 1e9+7;




void solve() {
	//
	string s;
	read(s);
	
	int n = int(s.length());
	
	if(n%3 == 1) {
		s += "$";
		s += "#";
		n += 2;
	} else if(n%3 == 2) {
		s += "$";
		n += 1;
	}
	
	int ans = 0;
	range(i, 0, n - 2, 1) {
		//cout << s[i] << " " << s[i+1] << " " << s[i+2] << "\n";
		if(s[i] == s[i+1] && s[i] == s[i+2]) {
			ans+=2;
			s[i+1] = '%';
			s[i+2] = '&';
		} else if (s[i] == s[i+1]) {
			s[i+1] = '%';
			ans++;
		} else if (s[i] == s[i+2]) {
			s[i+2] = (s[i+1] == '&' ? '%' : '&');
			ans++;
		} else if (s[i+1] == s[i+2]) {
			s[i+2] = (s[i] == '&' ? '%' : '&');
			ans++;
		}
	}
	
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
		
	int tests;
	read(tests);
 
	range(tests)
		solve();
}
