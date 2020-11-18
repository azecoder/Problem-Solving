/**
	Not accepted. Time limit exceeded on test 23
	http://codeforces.com/contest/342/submission/45679536
*/

#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define clr(a)          memset(a, 0, sizeof(a))
#define mp              make_pair
#define pb              push_back
#define MX              100005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;

int N, M;
vi edge[MX];
int color[MX], D[MX];

int best;

// dfs(current, parent)
void dfs(int v, int p = -1) {

    if(color[v] || p == -1) {
        D[v] = 0;
        if(p != -1) {
            return;
        }
    } else {
        D[v] = D[v] > D[p] ? D[p] + 1 : D[v];
    }

    rangev(i, edge[v]) {
        int to = edge[v][i];
        if(to != p && D[to] > D[v] + 1) { // if it is not parent node and distance is bigger than curr distance + 1
            dfs(to, v);
        }
    }

}

// change color and update data using dfs
void change_color(int v) {
    color[v] = 1;
    dfs(v);
}

// dfs(current, parent, distance)
void dfs_2(int v, int p = -1, int dist = 0) {

    if(dist > best) {
        return;
    }

    if(color[v]) {
        best = dist;
        return;
    }

    rangev(i, edge[v]) {
        int to = edge[v][i];
        if(to != p) {
            dfs_2(to, v, dist + 1);
        }
    }

}


int main() {

    faster_io;

    cin >> N >> M;

    range(i, 1, N-1) {

        int x, v;
        cin >> x >> v;

        edge[x].pb(v);
        edge[v].pb(x);

        D[i+1] = 100000000;


    }

    color[1] = 1; // red

    int t[M + 1], v[M + 1];
    int t1 = 0, t2 = 0;
    range(i, 1, M) {

        cin >> t[i] >> v[i];
        if(t[i] == 1) {
            t1++;
        } else {
            t2++;
        }

    }

    if(t1 > t2) {
        range(i, 1, M) {
            int _t = t[i], _v = v[i];
            if(_t == 1) {
                color[_v] = 1;
            } else {
                best = 100000000;
                dfs_2(_v);
                cout << best << "\n";
            }
        }
    } else {
        D[1] = 0;
        dfs(1);

        range(i, 1, M) {
            int _t = t[i], _v = v[i];
            if(_t == 1) {
                change_color(_v);
            } else {
                cout << D[_v] << "\n";
            }
        }
    }

    return 0;
}
