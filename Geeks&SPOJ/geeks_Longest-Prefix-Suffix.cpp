#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define rangem(x,v)     for(typeof (v).begin() x=(v).begin();x!=(v).end();++x)
#define clr(a)          memset(a, 0, sizeof(a))
#define all(a)          a.begin(), a.end()
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              300005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair<double, int> pdi;
typedef vector<pdi> vdi;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int LPS(string A) {

    int N = A.size();
    int *dp = new int [N];
    dp[0] = 0;

    int ind = 0, i = 1;
    while(i < N) {
        if(A[ind] == A[i]) {
            dp[i++] = ++ind;
        } else {
            if(ind) {
                ind = dp[ind-1];
            } else {
                dp[i++] = 0;
            }
        }
    }

    int ret = 1;
    range(i, 0, N - 1) ret = max(ret, dp[i]);
    return ret;

}

int main() {

    faster_io;

    string str;
    cin >> str;
    cout << LPS(str);

    return 0;
}
