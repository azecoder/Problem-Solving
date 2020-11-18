#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define mp              make_pair
#define pb              push_back


using namespace std;

typedef vector <int> vi;


int N, M;
vi g[20];
int color[20];

int isBipartite() {
    queue <int> Q;
    Q.push(1);
    range(i, 1, N) {
        color[i] = -1;
    }
    color[1] = 1;

    while(!Q.empty()) {
        int v = Q.front();
        Q.pop();

        rangev(i, g[v]) {
            int to = g[v][i];
            if(color[to] == -1) {
                color[to] = 1 - color[v];
                Q.push(to);
            }
        }
    }
    return 1;
}

int main() {

    faster_io;

    cin >> N;
    int sN = N * N, cnt = 0, ff, tt, flag = 0;
    range(i, 1, sN) {
        int x;
        cin >> x;
        if(x) {
            cnt++;
            if(i%N) {
                ff = 1+i/N;
                tt = i%N;
            } else {
                ff = i/N;
                tt = N;
            }
            if(ff == tt) {  // if A and B is equal
                flag = 1;   // then it is self loop, not bipartite
            }
            g[ff].pb(tt);
        }
    }

    if(cnt%2 || flag) { // if count is odd, we can not use 2 color accordingly
        cout << "0";    // so no bipartite
        return 0;
    }

    cout << isBipartite();

    return 0;
}

