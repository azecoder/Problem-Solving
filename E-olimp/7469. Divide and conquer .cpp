/*
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <ctime>*/
#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:256000000")
#define faster_io() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define sz(x) (int)(x).size()
#define repv(a, b) for(int (a) = (0); (a) < sz(b); ++(a))
#define rep(a,b,c) for(int (a) = (b); (a) <= (c); ++(a))
#define rev(a,b,c) for(int (a) = (b); (a) >= (c); --(a))
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair


using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vll;

const double EPS = 1e-7, PI = acos(-1.0);
const int MX = 20005;
const int INF = 1000000002;
const ll INFLL = 100000000000000000ll;
const ll MOD = 1000000007;

const int MXN = (int) 2e5 + 7;

struct node {
    int pos, g, e;
};

int n;
int smax[MXN];

ll ans;
ll sg[MXN], se[MXN];

node a[MXN];
pair<ll, int> all[MXN];

int main ()
{
    faster_io();
    cin >> n;
    rep(i, 1, n) {
        cin >> a[i].pos >> a[i].g >> a[i].e;
        sg[i] = sg[i - 1] + a[i].g;
        se[i] = se[i - 1] + a[i].e;
        all[i] = mp(se[i] - a[i].pos, i);
    }
    sort(all + 1, all + n + 1);
    rev(i, n, 1)
        smax[i] = max(smax[i + 1], all[i].nd);

    rep(i, 1, n) {
        int low = lower_bound(all + 1, all + n + 1, mp(se[i - 1] - a[i].pos, 0)) - all;
        int nxt = smax[low];
        ans = max(ans, sg[nxt] - sg[i - 1]);
    }
    cout << ans << "\n";
    return 0;
}