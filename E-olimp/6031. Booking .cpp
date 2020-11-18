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


#define MAX_B 5008


namespace Booking {

	int mdays[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };

	typedef struct {

		int start;
		int end;

	} time_entry_t;

	map<int, time_entry_t> timemap;

	map<int, time_entry_t>::iterator get_crate_entry( int time ) {

		map<int, time_entry_t>::iterator ret = timemap.find( time );

		if ( ret == timemap.end() ) {

			time_entry_t newentry;
			newentry.start = 0;
			newentry.end = 0;

			ret = timemap.insert( pair<int, time_entry_t>( time, newentry ) ).first;
		}

		return ret;

	}

	void add_time( int time, bool start ) {

		get_crate_entry( time )->second.start += start;
		get_crate_entry( time )->second.end += ( 1 - start );

	}


	int month_days( int m, bool leap ) {

		int sum = 0;

		for ( int i = 0; i < m; i++ ) {

			sum += mdays[leap][i];

		}

		return sum;

	}

	int read_time() {

		int yy, mm, dd, h, min;
		scanf( "%d-%d-%d%d:%d", &yy, &mm, &dd, &h, &min );

		int  dtot = ( yy - 2013 ) * 365 + ( month_days( mm - 1, yy == 2016 ) + dd - 1 );
		int total =  ( dtot * 24 + h ) * 60 + min;

		return total;

	}

	int process() {

		int busy = 0;
		int max_busy = 0;

		for ( map<int, time_entry_t>::iterator entryIt = timemap.begin(); entryIt != timemap.end(); entryIt++ ) {

			busy += entryIt->second.start;
			busy -= entryIt->second.end;

			max_busy = getmax(max_busy, busy);

		}

		return max_busy;

	}

      int cases;

      inline void run() {

		scanf( "%d", &cases );

		while( cases-- ) {

			int bkings;
			int clean;
			timemap.clear();

			scanf( "%d%d", &bkings, &clean );
			getchar();//\n

			for ( int i = 0; i < bkings; i++ ) {

				while( getchar() != ' ' ) ;
				int start = read_time();
				int end = read_time() + clean;

				add_time( start, true );
				add_time( end, false );
			}

			int rooms = process();
			printf( "%d\n", rooms );

            }

      }

};



int main() {

	faster_io;

	Booking::run();

	return 0;

}














