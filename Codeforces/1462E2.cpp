//#pragma comment(linker, "/STACK:102400000,102400000")
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <limits>
#include <climits>
#include <cstdio>
#include <complex>
#include <numeric>
#include <cassert>
#include <bitset>
#include <chrono>
#include <random>
#include <unordered_set>
#define endl '\n'
#define mp(x,y) make_pair((x),(y))
#define PI pair<int,int>
#define PD pair<double,double>
#define PDI pair<double,int>
#define ll long long
#define ull unsigned long long
#define Fori(x) for(int i=0;i<(x);i++)
#define Forj(x) for(int j=0;j<(x);j++)
#define Fork(x) for(int k=0;k<(x);k++)
#define For1i(x) for(int i=1;i<=(x);i++)
#define For1j(x) for(int j=1;j<=(x);j++)
#define NXT(x,y) (((x)+1)%(y))
#define y1 asdfeawf
using namespace std;
//const int INF = 2147483647;
const int mod = 1000000007;
const int mod2 = 998244353;
const double eps = 1e-9;
const double pi = acos(-1.0);
inline int rint() { int x; scanf("%d", &x); return x; }
inline long long rll() { long long x; scanf("%lld", &x); return x; }
inline long long ri64() { long long x; scanf("%I64d", &x); return x; }
void rvi(vector<int> &a, int n) { for (int i = 0; i < n; i++) { a.push_back(rint()); } }
void rvll(vector<long long> &a, int n) { for (int i = 0; i < n; i++) { a.push_back(rll()); } }
void showvi(vector<int> &a) { for (int i = 0; i < a.size(); i++) { printf("%d%c", a[i], (i + 1 == a.size() ? '\n' : ' ')); } }
void showvll(vector<long long> &a) { for (int i = 0; i < a.size(); i++) { printf("%lld%c", a[i], (i + 1 == a.size() ? '\n' : ' ')); } }
void showviln(vector<int> &a) { for (int i = 0; i < a.size(); i++) { printf("%d%c", a[i], '\n'); } }
void showvllln(vector<long long> &a) { for (int i = 0; i < a.size(); i++) { printf("%lld%c", a[i], '\n'); } }
void showi(int x) { printf("%d", x); }
void cfinit() { ios::sync_with_stdio(false); cin.tie(0); }
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {return (ull)rng() % B;}
int myRand(int l,int r){ return myRand(r-l+1)+l;}
using namespace std;


ll n,m,k;
ll a[200022];
ll b[200022];

ll fac[200022];
ll ifac[200022];
ll inv[200022];
void init_inverse() {
	inv[1] = 1;
	for (int i = 2; i < 200022; i++)
		inv[i] = (mod - (mod / i) * inv[mod % i] % mod) % mod;
}

ll C(ll n,ll m)
{
	if(n<m) return 0;
	return fac[n]*ifac[m]%mod*ifac[n-m]%mod;
}

int main()
{
	cfinit();
	init_inverse();
	fac[0] = 1;
	for(int i=1;i<200022;i++)
		fac[i] = fac[i-1]*i%mod;
	ifac[0] = inv[1];
	for(int i=1;i<200022;i++)
		ifac[i] = ifac[i-1]*inv[i]%mod;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		Fori(n) cin>>a[i];
		if(m==1)
		{
			cout<<n<<endl;
			continue;
		}
		Fori(n+10) b[i] = 0;
		sort(a,a+n);
		int r = 0;
		Fori(n)
		{
			while(r!=n-1&&a[r+1]-a[i]<=k) r++;
			int mxlen = r-i-1;
			if(mxlen<m-2) continue;
			int milen = m-2;
			b[milen]++;
			b[mxlen+1]--;
		}
		Fori(n+5) b[i]+=b[i-1];
		ll ans = 0;
		Fori(n+5) ans+=b[i]%mod*C(i,m-2)%mod;
		ans%=mod;
		cout<<ans<<endl;
	}
	return 0;
}
