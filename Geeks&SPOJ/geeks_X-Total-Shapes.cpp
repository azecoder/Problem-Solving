#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define rangem(x,v)     for(typeof (v).begin() x=(v).begin();x!=(v).end();++x)
#define clr(a)          memset(a, 0, sizeof(a))
#define all(a)          a.begin(), a.end()
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              300005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair<double, int> pdi;
typedef vector<pdi> vdi;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


int N, M;
char arr[55][55];
int visited[55][55];

int ways[5] = {0, -1, 0, 1, 0};

void dfs(int x, int v) {
    visited[x][v] = 1;
    range(i, 0, 3) {
        int nx = x + ways[i];
        int nv = v + ways[i+1];
        if(nx >= 1 && nx <= N && nv >= 1 && nv <= M && arr[nx][nv] == 'X' && !visited[nx][nv])
            dfs(nx, nv);
    }
}

int main() {

    faster_io;

    cin >> N >> M;
    range(i, 1, N) {
        string str;
        cin >> str;
        rangev(ii, str) {
            arr[i][ii+1] = str[ii];
        }
    }

    int result = 0;
    range(i, 1, N) {
        range(j, 1, M) {
            if(arr[i][j] == 'X' && !visited[i][j]) {
                // cerr << "START: " << i << " " << j << "\n";
                result++;
                dfs(i,j);
            }
        }
    }
    cout << result;

    return 0;
}
/*
5 10
1 2 0 -1 3
3 1 5 -2 0
2 4
1 2 2 3
2 4
2 3
2 0
1 1 0 4
2 0
2 3
1 3 1 1
2 1
*/
