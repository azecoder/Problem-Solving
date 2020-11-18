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


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


string str1, str2;

int editDistance(int N, int M) {

    if(N == 0) {
        return M;
    }
    if(M == 0) {
        return N;
    }

    if(str1[N] == str2[M]) {
        return editDistance(N-1, M-1);
    }

    return 1 + min(
               editDistance(N, M - 1),
               min(
                   editDistance(N - 1, M),
                   editDistance(N - 1, M - 1)
               )
           );

}

int T, N, M;

int main() {

    faster_io;

    cin >> T;
    range(i, 1, T) {
        cin >> N >> M >> str1 >> str2;
        cout << editDistance(N - 1, M - 1) << "\n";
    }

    return 0;
}
