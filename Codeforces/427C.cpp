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

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;

int N, M, cost[MX];
vi way1[MX], way2[MX];
int visited[MX];
vi order, posts;

void dfs_way(int cp) {

    visited[cp] = 1;
    rangev(i, way1[cp]) {
        int to = way1[cp][i];
        if(!visited[to]) {
            dfs_way(to);
        }
    }
    order.pb(cp);

}

void dfs_cost(int cp) {

    visited[cp] = 1;
    posts.pb(cp);
    rangev(i, way2[cp]) {
        int to = way2[cp][i];
        if(!visited[to]) {
            dfs_cost(to);
        }
    }

}

ll res_cost = 0, res_count = 1;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> cost[i];
    }
    cin >> M;
    range(i, 1, M) {
        int x, v;
        cin >> x >> v;
        way1[x].pb(v);
        way2[v].pb(x);
    }

    range(i, 1, N) {
        if(!visited[i]) {
            dfs_way(i);
        }
    }

    clr(visited);
    rrange(i, N-1, 0) {
        int cp = order[i];
        if(!visited[cp]) {
            dfs_cost(cp);

            int mn_cost = INF;
            rangev(j, posts) {
                mn_cost = min(cost[posts[j]], mn_cost);
            }
            res_cost += mn_cost;

            int mn_count = 0;
            rangev(j, posts) {
                if(cost[posts[j]] == mn_cost) {
                    mn_count++;
                }
            }
            res_count *= mn_count;
            res_count %= MOD;

            posts.clear();
        }
    }

    cout << res_cost << " " << res_count << "\n";

    return 0;
}
