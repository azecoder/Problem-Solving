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
#define getmodule(a) ((a) < 0 ? (-a) : (a))
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




namespace Underground_Cables
{

      ll u[MAXN*MAXN], v[MAXN*MAXN];
      ld w[MAXN*MAXN];
      ll r[MAXN*MAXN];

      ll p[MAXN];
      ll n, m;

      bool cmp( ll i, ll j )
      {

            return w[i] < w[j];
            
      }

      ll find_par( ll x )
      {

            return ( p[x] == x ? x : p[x] = find_par( p[x] ) );
            
      }

      ld Kruskal()
      {

            ld ret = 0;
            
            rep( i, 0, n - 1 ) {
            
                  p[i] = i;
                  
            }
            
            rep( i, 0, m - 1 ) {
            
                  r[i] = i;
                  
            }
            
            sort( r, r + m, cmp );
            
            rep( i, 0, m - 1 ) {
            
                  ll e = r[i];
                  ll x = find_par( u[e] );
                  ll y = find_par( v[e] );
                  
                  if( x != y ) {
                  
                        ret += w[e];
                        p[x] = y;
                        
                  }
                  
            }
            
            return ret;
            
      }

      struct Node {

            ld x, y;
            
      };

      Node kill[MAXN];
      ll t;

      inline void run()
      {

            while( cin >> t && t ) {
            
                  n = t;
                  m = 0;
                  
                  ld kiss;
                  
                  rep( i, 1, n ) {
                  
                        cin >> kill[i - 1].x >> kill[i - 1].y;
                        
                  }
                  
                  rep( i, 0, t - 1 ) {
                  
                        rep( j, i + 1, t - 1 ) {
                        
                              kiss = sqrt( ( kill[i].x - kill[j].x ) * ( kill[i].x - kill[j].x ) + ( kill[i].y - kill[j].y ) * ( kill[i].y - kill[j].y ) );
                              u[m] = i;
                              v[m] = j;
                              w[m++] = kiss;
                              
                        }
                        
                  }
                  
                  cout.precision( 2 );
                  cout << fixed << Kruskal() << "\n";
                  
            }
	
}

};



int main()
{

	faster_io;
	
	Underground_Cables::run();
	
	return 0;
	
}

