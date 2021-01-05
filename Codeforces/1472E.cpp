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



class Person {
public:
	int h, w, id;
	Person() {}
	Person(int hh, int ww, int idx) : h(hh), w(ww), id(idx) {}
};


struct compr {
    inline bool operator() (const Person& A, const Person& B) {
		if(A.h < B.h)
			return true;
		if(A.h == B.h && A.w < B.w)
			return true;
		return false;
    }
};

void solve() {
	//
	int n;
	read(n);

	vk<Person> a(n);
	range(n) {
		int x, v;
		read(x, v);
		a[i] = Person(max(x, v), min(x, v), i);
	}
	sort(a.begin(), a.end(), compr());
	
	//cout << "pr\n";
	//each(pr, a) {
		//cout << pr.h << " " << pr.w << " " << pr.id << "\n";
	//}
	
	vi ans(n);
	ans[a[0].id] = -1;
	range(i, 1, n) {
		short x = 0;
		if(a[i].h > a[0].h && a[i].w > a[0].w) {
			ans[a[i].id] = a[0].id;
			x = 1;
			break;
		} else if(a[i].h > a[0].h && a[i].w > a[1].w) {
			ans[a[i].id] = a[1].id;
			x = 1;
			break;
		}
		if(!x)
			ans[a[i].id] = -1;
	}
	each(pr, ans)
		cout << (pr >= 0 ? pr + 1 : pr) << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
		
	int tests;
	read(tests);
 
	range(tests)
		solve();
}
