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


int Knapsack(int N, int W, int *arr) {

    if(W == 0) {
        return 1;
    }

    if(N == 0 && W > 0) {
        return 0;
    }

    if(arr[N] > W) {
        return Knapsack(N - 1, W, arr);
    }

    return Knapsack(N - 1, W, arr) || Knapsack(N - 1, W - arr[N], arr);
}

int subsetSum(int N, int *arr) {

    int sum = 0;
    range(i, 1, N) sum += arr[i];
    if(sum%2) {
        return 0;
    }

    int W = sum / 2;

    return Knapsack(N, W, arr);

}

int N;

int main() {

    faster_io;

    cin >> N;

    int *arr = new int[N+1];
    range(i, 1, N) cin >> arr[i];

    cout << (subsetSum(N, arr) ? "YES" : "NO");

    return 0;
}
