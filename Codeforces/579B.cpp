#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(size_t i=a;i<=b;i++)
#define rrange(i,a,b)   for(size_t i=a;i>=b;i--)
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second


using namespace std;

typedef pair <int, int> pii;

int N;
int strength, ans[805];
priority_queue < pair < int, pii > > contestants;
bool visited[805] = { 0 };

int main() {

    faster_io;

    cin >> N;
    range(i, 2, 2 * N) {
        range(j, 1, i - 1) {
            cin >> strength;
            contestants.push(mp(strength,mp(i, j)));
        }
    }
    while(!contestants.empty()) {
        int x = contestants.top().nd.st;
        int v = contestants.top().nd.nd;
        contestants.pop();
        if(!visited[x] && !visited[v]) {
            visited[x] = visited[v] = 1;
            ans[x] = v;
            ans[v] = x;
        }
    }
    range(i, 1, 2 * N) {
        cout << ans[i] << " ";
    }

    return 0;
}
