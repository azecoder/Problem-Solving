#include <iostream>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <vector>
#include <stdio.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 2510
#define INF 0x3F3F3F3F
#define PB push_back
#define MP make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;

vector<int> g[MAXN];
int used[MAXN];
int u[MAXN] , v[MAXN];
int parent[MAXN];
int n ,rem_u , rem_v , add_u , add_v , node , au , av;

int par(int n , int cnt) {
while (cnt > 0 && n != parent[n]) n = parent[n] , cnt--;
return n;
}

int bfs(int v , int op , int src) {
pr Q[MAXN];
int ql = 0 , qr = 0 , res = -1;
memset(used,0,sizeof(used)); used[src] = 1;
Q[qr++] = MP(v , 0); parent[v] = v;
while (ql < qr) {
    int cur = Q[ql].f , d = Q[ql].s; ql++;
    if (d > res) res = d , node = cur;
    for (int i = 0; i < (int)g[cur].size(); i++) {
        int to = g[cur][i];
        if (!used[to]) {
            Q[qr++] = MP(to , d + 1);
            parent[to] = cur;
            used[to] = 1;
        }
    }
    used[cur] = 1;
}
return !op ? node : res;
}

int f(int u , int v) {
int d1 , d2;

d1 = bfs(bfs(v , 0 , u) , 1 , u);
av = par(node , d1 / 2);

d2 = bfs(bfs(u , 0 , v) , 1 , v);
au = par(node , d2 / 2);

int dd1 = d1 % 2 ? d1 + 1 : d1;
int dd2 = d2 % 2 ? d2 + 1 : d2;

if (u == au && v == av) return MAXN;
return max((dd1 / 2) + (dd2 / 2) + 1 , max(d1 , d2));
}


int main()
{
cin >> n;
for (int i = 0; i < n - 1; i++) {
    cin >> u[i] >> v[i];
    g[u[i]].PB(v[i]);
    g[v[i]].PB(u[i]);
}
int cvb = MAXN;
for (int i = 0; i < n - 1; i++) {
    int q = f(u[i] , v[i]);
    if (q <= cvb) {
        cvb = q;
        rem_u = u[i]; rem_v = v[i];
        add_u = au; add_v = av;
    }
}
cout << cvb << endl;
cout << rem_u << " " << rem_v << endl;
cout << add_u << " " << add_v << endl;

return 0;
} 