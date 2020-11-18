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


int N,m;
int arr[MX];
int _left[MX],_right[MX];
map<int,int> number,number2;
int temp[MX];

void update(int pos, int val) {
    while (pos<=N) {
        temp[pos] += val;
        pos += pos & - pos;
    }
}
int query(int pos) {
    int ret=0;
    while (pos>0) {
        ret += temp[pos] ;
        pos -= pos & -pos;
    }
    return ret;
}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }
    range(i, 1, N) {
        number[arr[i]]++;
        _left[i]=number[arr[i]];
    }
    rrange(i, N, 1) {
        number2[arr[i]]++;
        _right[i]=number2[arr[i]];
    }
    rrange(i, N, 1) {
        update(_right[i],1);
    }
    ll res = 0;
    range(i, 1, N) {
        update(_right[i], -1);
        res += query(_left[i]-1);
    }
    cout << res;

    return 0;
}
