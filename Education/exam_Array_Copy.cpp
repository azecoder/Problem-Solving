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


int N, M;
int A[MX], B[MX], tree[4*MX];

void create(int left, int right, int index) {
    if(left == right) {
        tree[index] = B[left];
        return;
    }

    int mid = (left + right) / 2;
    create(left, mid, index * 2);
    create(mid + 1, right, index * 2 + 1);
}

void update(int left, int right, int index, int lA, int rA, int lB, int rB) {
    if(left > rB || right < lB || left > right) {
        return;
    }
    if(left >= lB && right <= rB && left == right) {
        tree[index] = A[lA - lB + left];
        B[left] = A[lA - lB + left];
        return;
    }

    int mid = (left + right) / 2;
    update(left, mid, index * 2, lA, rA, lB, rB);
    update(mid + 1, right, index * 2 + 1, lA, rA, lB, rB);
    return;
}

int main() {

    faster_io;

    cin >> N >> M;
    range(i, 1, N) {
        cin >> A[i];
    }
    range(i, 1, N) {
        cin >> B[i];
    }

    create(2, N, 1);

    range(i, 1, M) {
        int type;
        cin >> type;
        if(type == 1) {
            int x, v, k;
            cin >> x >> v >> k;
            update(1, N, 1, x + 1, x + k + 1, v + 1, v + k + 1);
        } else if(type == 2) {
            int x;
            cin >> x;
            cout << B[x + 1] << "\n";
        }
    }

    return 0;
}
/*
5 10
1 2 0 -1 3
3 1 5 -2 0
2 4
1 2 2 3
2 4
2 3
2 0
1 1 0 4
2 0
2 3
1 3 1 1
2 1
*/
