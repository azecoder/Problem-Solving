#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define pb              push_back

using namespace std;

typedef long long ll;
typedef vector <int> vi;

const ll INF = 1e9 + 100;

int N;
vi arr;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        int x;
        cin >> x;
        arr.pb(x);
    }

    int sum = 0, result = -INF;
    rangev(i, arr) {
        if(sum >= 0) {
            sum += arr[i];
        } else {
            sum = arr[i];
        }
        result = max(result, sum);
    }
    cout << result;

    return 0;
} 
