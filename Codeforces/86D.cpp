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


struct Query {
    int l, r, idx;
    Query() {};
    Query(int _l, int _r, int _idx) {
        l = _l, r = _r, idx = _idx;
    }
};

bool comp(Query A, Query B) {
    if(A.l != B.l) {
        return A.l < B.l;
    }
    return A.r < B.r;
}

ll formulaDiff(int x, int c) {
    return 1ll * x * (c * c - (c - 1) * (c - 1));
}

int *printQuerySums(int arr[], int N, Query query[], int M) {

    ll *ret = new ll[M+1];

    sort(query, query + M, comp);

    int currL = 0, currR = 0;
    ll currSum = 0;
    map <int, int> cnt;

    range(i, 0, M - 1) {
        int L = query[i].l - 1;
        int R = query[i].r - 1;
        int IDX = query[i].idx;

        while(currL < L) {
            currSum -= formulaDiff(arr[currL], cnt[arr[currL]]);
            cnt[arr[currL]]--;
            currL++;
        }
        // cerr << currL << " - " << L << " : " << currSum << "\n";
        while(currL > L) {
            currL--;
            cnt[arr[currL]];
            currSum += formulaDiff(arr[currL], cnt[arr[currL]]);
        }
        // cerr << currL << " - " << L << " : " << currSum << "\n";
        while(currR <= R) {
            cnt[arr[currR]]++;
            currSum += formulaDiff(arr[currR], cnt[arr[currR]]);
            currR++;
        }
        // cerr << currR << " - " << R << " : " << currSum << "\n";
        while(currR > R + 1) {
            currR--;
            currSum -= formulaDiff(arr[currR], cnt[arr[currR]]);
            cnt[arr[currR]]--;
        }
        // cerr << currR << " - " << R << " : " << currSum << "\n";
        ret[IDX] = currSum;
    }

    return ret;

}


int main() {

    faster_io;

    int N, M;
    cin >> N >> M;

    int *arr = new int[N];
    range(i, 1, N) {
        cin >> arr[i-1];
    }
    Query *query = new Query[M];
    range(i, 1, M) {
        int x, v;
        cin >> x >> v;
        query[i-1] = Query(x, v, i);
    }

    ll *res = printQuerySums(arr, N, query, M);

    range(i, 1, M) {
        cout << res[i] << "\n";
    }

    return 0;
}

