#include <bits/stdc++.h>

#define mp make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;
typedef pair<int, pr> prr;

int p[26];
int a[1005][1005];
int dis[1005][1005];
int used[1005][1005];
int k , n , m;
int x[4] = {1, -1, 0, 0};
int y[4] = {0, 0, 1, -1};

int djkstra(pr src) {
    priority_queue<prr , vector<prr> , greater<prr > > Q;
    memset(dis , 0x3f3f3f3f , sizeof(dis));
    memset(used, 0, sizeof(used));
    dis[src.f][src.s] = 0;
    Q.push(mp(dis[src.f][src.s] , src));
    while (!Q.empty()) {
        prr cur = Q.top();
        Q.pop();
        used[cur.s.f][cur.s.s] = 1;

        if (cur.s.f == 0 || cur.s.f == n - 1 || cur.s.s == 0 || cur.s.s == m - 1)
            break;

        for (int i = 0; i < 4; ++i) {
            int next_x = cur.s.f + x[i];
            int next_y = cur.s.s + y[i];

            if (next_x < 0 || next_x > n || next_y < 0 || next_y > m || used[next_x][next_y]) continue;

            if (dis[cur.s.f][cur.s.s] + p[a[next_x][next_y]] < dis[next_x][next_y]) {
                dis[next_x][next_y] = dis[cur.s.f][cur.s.s] + p[a[next_x][next_y]];
                Q.push(mp(dis[next_x][next_y] , mp(next_x , next_y)));
            }

        }
    }

    int ans = 0x3f3f3f3f;
    for (int i = 0; i < m; ++i) {
        ans = min(ans , dis[0][i]);
        ans = min(ans , dis[n - 1][i]);
    }
    for (int i = 0; i < n; ++i) {
        ans = min(ans , dis[i][0]);
        ans = min(ans , dis[i][m - 1]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);

    int t;

    cin >> t;
    while (t--) {
        cin >> k >> m >> n;
        for (int i = 0; i < k; ++i) {
            char ch;
            int v;
            cin >> ch >> v;
            p[ch - 'A'] = v;
        }
        pr ent;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                if (ch == 'E') {
                    ent = mp(i,j);
                }
                a[i][j] = ch - 'A';
            }
        }
        cout << djkstra(ent) << endl;
    }

    return 0;
}