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

#define dbg(x)          cerr << #x << " = " << x << endl



using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair<double, int> pdi;
typedef vector<pdi> vdi;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;
const int MX = 3e5 + 5;


vector <int> KMP(string A) {
    int N = A.length();
    vi ret(N);
    int idx = ret[0] = 0;
    range(i, 1, N - 1) {
        while (idx > 0 && A[i] != A[idx]) idx = ret[idx - 1];
        if (A[i] == A[idx]) idx++;
        ret[i] = idx;
    }
    return ret;
}


int N;
string A, B;

int main() {

    faster_io;

    cin >> N >> A >> B;
    string S = A + '#' + B + B;

    vi vec = KMP(S);

    int maxx = -1, pos = 0;
    range(i, N, S.size() - 1) {
        if(vec[i] > maxx) {
            maxx = vec[i];
            pos = i;
        }
    }

    cout << pos - N - maxx;

    return 0;
}
