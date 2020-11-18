
#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define clr(a)          memset(a, 0, sizeof(a))
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              100005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;

int N, M;
int x, v, root[MX];
ll weight;
pip arr[MX];

void initialize() {

    range(i, 1, MX) {
        root[i] = i;
    }

}

int getRoot(int _x) {

    while(_x != root[_x]) {
        _x = root[_x];
    }

    return _x;

}

void unionRoots(int _x, int _v) {

    int _p = getRoot(_x);
    int _q = getRoot(_v);
    root[_p] = root[_q];

}

int kruskal() {

    ll ret = 0;
    range(i, 1, M) {

        int _x = arr[i].nd.st;
        int _v = arr[i].nd.nd;
        ll _cost = arr[i].st;

        if(getRoot(_x) != getRoot(_v)) {

            ret += _cost;
            unionRoots(_x, _v);

        }

    }

    return ret;

}

int main() {

    faster_io;

    initialize();

    cin >> N >> M;
    range(i, 1, M) {
        cin >> x >> v >> weight;
        arr[i] = mp(weight, mp(x, v));
    }
    sort(arr + 1, arr + M + 1);

    cout << kruskal() << "\n";

    return 0;
}

/**

Input:
4 5
1 2 10
2 3 15
1 3 5
4 2 2
4 3 40

Output:
17

*/
