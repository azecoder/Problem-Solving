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
#define MX              200005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int N, arr[MX];

int LBS() {

    int *lis = new int[N+1];
    int *lds = new int[N+1];
    range(i, 1, N) {
        lis[i] = 1;
        lds[i] = 1;
    }

    range(i, 2, N) {
        range(j, 1, i - 1) {
            if(arr[i] > arr[j]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }
    rrange(i, N - 1, 1) {
        rrange(j, N, i + 1) {
            if(arr[i] > arr[j]) {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }

    int ret = 0;
    range(i, 1, N) {
        ret = max(ret, lis[i] + lds[i]);
    }

    return ret - 1;

}

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> arr[i];
    }
    cout << LBS();

    return 0;
} 
