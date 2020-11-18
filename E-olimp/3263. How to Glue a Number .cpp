#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#define faster_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define clr(a,b) memset((a), (b), sizeof(a))
#define getmax(a,b) ((a) > (b) ? (a) : (b))
#define getmin(a,b) ((a) < (b) ? (a) : (b))
#define getmodule(a) ((a) < 0.0 ? (-a) : (a))
#define pi acos(-1)
#define st first
#define nd second
#define pb push_back
#define mp make_pair

#define MX (int)(3e5+10)
#define MAXN 1 << 5

#define left_node (cur_node << 1)
#define right_node (left_node | 1)
#define mid ((left + right) >> 1)
#define bit(x,y) ((x >> y) & 1)



using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;
typedef vector <vl> vvl;




namespace Glue_a_Number {

      ll t;
      ll k, x;
      ll dp[2][MAXN][101];
      ll pow100[5] = {1, 100, 10000, 1000000, 100000000};

	inline void run() {

		cin >> t;

            rep(test, 1, t) {

			clr( dp, 0 );

			cin >> k >> x;

			dp[1][0][0] = 1;

                  int i;
                  for (i = 10; i < 100; i++) {

                        rep(j, 0, x - 1) {

                              rev(mask, (1 << k) - 1, 0) {

						if ( dp[( i + 1 ) % 2][mask][j] ) {

							dp[i % 2][mask][j] += dp[( i + 1 ) % 2][mask][j];

                                          rep(g, 0, k - 1) {

								if ( !( mask & ( 1 << g ) ) ) {

									dp[i % 2][mask | ( 1 << g )][( j + i * pow100[g] ) % x] += dp[( i + 1 ) % 2][mask][j];

								}

							}

							dp[( i + 1 ) % 2][mask][j] = 0;

						}

					}

                        }

                  }

                  cout << "Case #" << test << ": " << dp[( i + 1 ) % 2][( 1 << k ) - 1][0] << "\n";

            }

      }

};



int main()
{

      faster_io;

	Glue_a_Number::run();

	return 0;

}














