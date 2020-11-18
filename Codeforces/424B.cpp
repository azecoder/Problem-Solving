#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second


using namespace std;

typedef pair<double, int> pdi;
typedef vector<pdi> vdi;


int N, S;
priority_queue<pdi, vdi, greater<pdi>> Q;

double dist(int x, int v) {
    return sqrt(x * x + v * v);
}

int main() {

    faster_io;

    cin >> N >> S;
    range(i, 1, N) {
        int x, v, p;
        cin >> x >> v >> p;
        Q.push(mp(dist(x, v), p));
    }
    while(!Q.empty()) {
        pdi data = Q.top();
        S += data.nd;
        if(S >= 1000000) {
            cout.precision(6);
            cout << fixed << data.st << "\n";
            return 0;
        }
        Q.pop();
    }
    cout << "-1";

    return 0;
}
