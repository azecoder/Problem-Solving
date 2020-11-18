#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define x               first
#define h               second


using namespace std;

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <pii> vii;

const ll INF = 1e9 + 100;


int N;
vii arr;

int main() {

    faster_io;

    cin >> N;
    arr.resize(N+1);
    range(i, 1, N) {
        cin >> arr[i].x >> arr[i].h;
    }

    int cnt = 0, last = -1 * INF;
    range(i, 1, N) {
        if(arr[i].x - arr[i].h > last) { // fell tree left
            cnt++;
            last = arr[i].x;
        } else {
            if(i == N) { // if it is last you can fell it right
                cnt++; // so count = count + 1
            } else {
                if(arr[i + 1].x > arr[i].x + arr[i].h) { // if it is possible to fell it right
                    cnt++;
                    last = arr[i].x + arr[i].h;
                } else {
                    last = arr[i].x;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}
