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

#define faster_io() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define file_name(a) (freopen(((string)(a) + ".in").c_str(),"r",stdin), freopen(((string)(a) + ".out").c_str(),"w",stdout))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define iter(a) __typeof((a).begin())
#define fore(a,b) for(iter(b) a = (b).begin(); a != (b).end(); ++a)
#define all(a) a.begin(), a.end()
#define sqr(a) (a * a)
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

const ll inf = (2.e18 + 1) * 1ll;


ll N;

int len(ll n) {
    char st[100];
    sprintf(st, "%lld", n);
    return strlen(st);
}


int main()
{

    while (cin >> N) {

        ll A = 0, B = 1;

        rep(i, 1, N) {

            A = A * i + B * N; B *= i;
            ll g = __gcd(A, B) * 1ll;
            A /= g; B /= g;

        }

        if(B == 1) {

            cout << A << "\n";

        } else {

            ll C = A / B; A %= B;
            rep(i, 0, len(C)) {

                cout << " ";

            }
            cout << A << "\n" << C << " ";

            rep(i, 0, len(B) - 1) {

                cout << "-";

            }
            cout << "\n";

            rep(i, 0, len(C)) {

                cout << " ";

            }
            cout << B << "\n";

        }

    }

    return 0;
}


/*

#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=5, b=3;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  return 0;
}

ANSWER IS : [5 plus 3 is 8] is a string 13 chars long

*/