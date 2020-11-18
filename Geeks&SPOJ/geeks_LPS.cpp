#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define clr(a)          memset(a, 0, sizeof(a))
#define all(a)          a.begin(), a.end()
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              200005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int DP[505][505];

int LPS(string A, int ll, int rr) {

    if(DP[ll][rr] > 0) {
        return DP[ll][rr];
    }

    if(ll == rr) {
        return 1;   // string = %X%
    }

    if(rr == ll + 1 && A[ll] == A[rr]) {
        return 2;   // string = %XX%
    }

    if(A[ll] == A[rr]) {
        DP[ll+1][rr-1] = DP[ll+1][rr-1] ?: LPS(A, ll + 1, rr - 1);
        DP[ll][rr] = DP[ll+1][rr-1] + 2;
        return DP[ll][rr];
    }

    DP[ll][rr-1] = DP[ll][rr-1] ?: LPS(A, ll, rr - 1);
    DP[ll+1][rr] = DP[ll+1][rr] ?: LPS(A, ll + 1, rr);
    DP[ll][rr] = max( DP[ll][rr-1], DP[ll+1][rr] );
    return DP[ll][rr];

}


string str;

int main() {

    faster_io;

    cin >> str;
    cout << LPS(str, 0, str.size() - 1) << "\n";

    return 0;
}
