#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <ctime>
/*#include <bits/stdc++.h>*/

#define faster_io ios_base::sync_with_stdio(false);cin.tie();
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define sq(a) (a * a)
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0 ? (-a) : (a))
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define MX 4010

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;


string str;


ll a[100001][26], right_index;

void trie(ll index) {

    ll cur_index = 0;

    rep(i, index, sz(str) - 1) {

        if(a[cur_index][str[i] - 'a'] == -1) {

            a[cur_index][str[i] - 'a'] = (++right_index);

        }

        cur_index = a[cur_index][str[i] - 'a'];

    }

}


int main()
{

    faster_io;

    cin >> str;


    rep(i, 0, sq(sz(str))-1) {

        rep(j, 0, 25) {

            a[i][j] = -1;

        }

    }


    revv(i, str) {

        trie(i);

    }

    cout << right_index;

    return 0;

}


























