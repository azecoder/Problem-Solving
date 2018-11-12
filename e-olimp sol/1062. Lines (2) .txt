#include <iostream>
#include <algorithm>
#include <queue>

#define MAXN 260
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;

int x[] = {1 , -1 , 0 , 0};
int y[] = {0 , 0 , 1 , -1};

pr src , dest;
char map[MAXN][MAXN];
pr par[MAXN][MAXN];
int used[MAXN][MAXN];
int n;

int check(int i , int j) {
	if (i < 0 || i >= n) return false;
	if (j < 0 || j >= n) return false;
	if (map[i][j] == 'O' || used[i][j]) return false;
	return true;
}

void bfs() {
	queue<pr> Q;
	Q.push(src);
	used[src.f][src.s] = 1;
	while (!Q.empty()) {
		pr cur = Q.front(); Q.pop();
		if (cur.f == dest.f && cur.s == dest.s) break;
		for (int i = 0; i < 4; ++i) {
			int _x = cur.f + x[i];
			int _y = cur.s + y[i];
			if (!check(_x,_y)) continue;
			par[_x][_y] = cur;
			used[_x][_y] = 1;
			Q.push(mp(_x,_y));
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> map[i][j];
			if (map[i][j] == '@') src = mp(i , j);
			else if (map[i][j] == 'X') dest = mp(i,j);
		}
	}	
	bfs();
	if (!used[dest.f][dest.s]) cout << "N\n";
	else {
		cout << "Y\n";
		pr cur = dest;
		while (cur.f != src.f || cur.s != src.s) {
			map[cur.f][cur.s] = '+';
			cur = par[cur.f][cur.s];
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cout << map[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}
