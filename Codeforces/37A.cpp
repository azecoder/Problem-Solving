#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(size_t i=a;i<=b;i++)
#define rrange(i,a,b)   for(size_t i=a;i>=b;i--)

using namespace std;


int N;
int bar, largest_tower = 0, height_bar[1005];
set <int> dist_bars;

int main() {

    faster_io;

    cin >> N;
    range(i, 1, N) {
        cin >> bar;
        if(largest_tower < (++height_bar[bar])) {
            largest_tower = height_bar[bar];
        }
        dist_bars.insert(bar);
    };
    cout << largest_tower << " " << dist_bars.size() << "\n";

    return 0;
}
