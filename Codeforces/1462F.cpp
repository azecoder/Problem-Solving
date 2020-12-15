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


int n;
PI a1[200022];
PI a2[200022];

bool cmp1(PI a,PI b)
{
	if(a.first==b.first) return a.second<b.second;
	return a.first<b.first;
}
bool cmp2(PI a,PI b)
{
	if(a.second==b.second) return a.first<b.first;
	return a.second<b.second;
}

int main()
{
	cfinit();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		Fori(n) cin>>a1[i].first>>a1[i].second;
		Fori(n) a2[i].first=a1[i].first;
		Fori(n) a2[i].second=a1[i].second;
		sort(a1,a1+n,cmp1);
		sort(a2,a2+n,cmp2);
		ll ans = n;
		Fori(n)
		{
			int l = a1[i].first;
			int r = a1[i].second;
			ll sum = 0;
			int p1 = lower_bound(a1,a1+n,mp(r+1,-1),cmp1)-a1;
			sum+=n-p1;
			int p2 = lower_bound(a2,a2+n,mp(-1,l),cmp2)-a2;
			sum+=p2;
			ans = min(ans,sum);
		}
		cout<<ans<<endl;
	}
	return 0;
}
