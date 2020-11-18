#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
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
#define MX              100005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int N;
struct People {
    string name;
    int pos, height, new_height;
    People(string _n, int _p, int _h) {
        name = _n, pos = _p, height = _h;
    }
};

bool comp(People A, People B) {
    return A.height < B.height;
}

int main() {

    faster_io;

    cin >> N;
    vector <People> arr;
    range(i, 1, N) {
        string n;
        int h;
        cin >> n >> h;
        arr.pb( People(n, i, h) );
    }
    sort(all(arr), comp);

    vi por;
    rangev(i, arr) {
        if(arr[i].height > i) {
            cout << "-1";
            return 0;
        }
        por.pb(i);
        int x = por.size() - 1;
        while(x > por.size() - 1 - arr[i].height) {
            swap(por[x], por[x - 1]);
            x--;
        }
    }

    rangev(i, por) {
        arr[por[i]].new_height = i + 1;
    }

    rangev(i, arr) {
        cout << arr[i].name << " " << arr[i].new_height << "\n";
    }

    return 0;
}
