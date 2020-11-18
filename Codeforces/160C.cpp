#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangem(x,v)     for(typeof (v).begin() x=(v).begin();x!=(v).end();++x)
#define st              first
#define nd              second


using namespace std;

typedef long long ll;
typedef pair <int, int> pii;

int N;
ll K;
map <int, int> arr;

pii solve() {
    pii ret;
    rangem(elem, arr) {
        ll cur = 1ll * elem->nd * N;
        if(cur >= K) {
            ret.st = elem->st;
            int cnt = elem->nd;
            rangem(elem2, arr) {
                ll cur2 = 1ll * cnt * elem2->nd;
                if(cur2 >= K) {
                    ret.nd = elem2->st;
                    break;
                } else {
                    K -= cur2;
                }
            }
            break;
        } else {
            K -= cur;
        }
    }
    return ret;
}

int main() {

    faster_io;

    cin >> N >> K;
    range(i, 1, N) {
        int x;
        cin >> x;
        arr[x]++;
    }
    pii res = solve();
    cout << res.st << " " << res.nd;

    return 0;
}
