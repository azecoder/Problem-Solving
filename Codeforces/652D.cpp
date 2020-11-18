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


int N;
vi vec;
struct Pairs {
    int ll, rr, index, ans;
    Pairs() {}
    Pairs(int x, int v, int i) {
        ll = x, rr = v, index = i;
    }
};
Pairs arr[MX];

bool cmp1(Pairs A, Pairs B) {
    return A.ll < B.ll;
}

bool cmp2(Pairs A, Pairs B) {
    return A.index < B.index;
}

int temp[3*MX];
void update(int x, int val) {
    // cerr << "update ";
    while(x <= 2 * N) {
        // cerr << x;
        x += x & (-x);
        temp[x] += val;
        // cerr << " -> " << temp[x] << "\n";
    }
}

int query(int x) {
    // cerr << "query ";
    int ret = 0;
    while(x > 0) {
        x -= x & (-x);
        ret += temp[x];
    }
    return ret;
}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        int x, v;
        cin >> x >> v;
        arr[i] = Pairs(x, v, i);
    }
    sort(arr + 1, arr + N + 1, cmp1);

    range(i, 1, N) {
        update(arr[i].rr, 1);
    }

    range(i, 1, N) {
        arr[i].ans = query(arr[i].rr);
        update(arr[i].rr, -1);
    }

    sort(arr + 1, arr + N + 1, cmp2);
    range(i, 1, N) {
        cout << arr[i].ans << "\n";
    }

    return 0;
}
/*
5
2 3
5 6
4 7
1 9
3 8
*/
