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
#define MAXN 1010

#define left_node (cur_node << 1)
#define right_node (left_node | 1)
#define mid ((left + right) >> 1)
#define bit(x,y) ((x >> y) & 1)



using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <ll, ll> pll;
typedef vector <ll> vl;
typedef vector <pll> vll;
typedef vector <vl> vvl;




namespace Magic_Multiple {

      ll n;
      ll s[MX];
      ll i;

      inline void run()
      {

            while( cin >> n ) {

                  clr( s, 0 );
                  ll x;

                  for( i = 1;; i++ ) {

                        ll flag = n * i;
                        ll flag1 = 0;

                        while( flag ) {

                              x = flag % 10;
                              s[x] = 1;
                              flag /= 10;

                        }

                        rep(j, 0, 9) {

                              if( s[j] == 0 ) {

                                    flag1 = 1;
                                    break;

                              }

                        }

                        if( !flag1 ) {

                              cout << i << "\n";
                              break;

                        }

                  }

            }

      }

};



int main()
{

	faster_io;

	Magic_Multiple::run();

	return 0;

}

