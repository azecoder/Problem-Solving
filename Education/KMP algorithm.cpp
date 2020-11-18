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


int pre[MX];

void LPS(string A, int N) {

    int x = 0, i = 1;
    pre[0] = 0;

    while(i < N) {
        // cerr << x << " " << i << " : " << A[x] << " " << A[i] << "\n";
        if(A[x] == A[i]) {
            x++;
            pre[i] = x;
            i++;
        } else {
            if(x) {
                x = pre[x - 1];
            } else {
                pre[i] = 0;
                i++;
            }
        }
    }

}

void KMP(string A, string B, int N, int M) {

    LPS(B, M);

    int x = 0, i = 0;

    while(i < N) {
        // cerr << x << " " << i << " : " << A[x] << " " << A[i] << "\n";
        if(A[i] == B[x]) {
            i++;
            x++;
        }
        if(x == M - 1) {
            cout << "Pattern found at index : " << i - x << "\n";
            x = pre[x - 1];
        } else if(i < N && A[i] != B[x]) {
            if(x != 0) {
                x = pre[x - 1];
            } else {
                i++;
            }
        }
    }

}


int main() {

    faster_io;

    string A, B;
    cin >> A >> B;
    KMP(A, B, A.size(), B.size());

    return 0;
}

