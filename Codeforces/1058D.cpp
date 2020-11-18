#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              400005


using namespace std;

int N, M, K;

inline void read()
{

    cin >> N >> M >> K;

}


inline void solve()
{

    if( (N * M * 2) % K ) {
        cout << "NO";
        return;
    }
    int area = N * M / K;
    int double_area = 2 * area;
    int sqrt_double_area = int(sqrt(double_area));

    if(sqrt_double_area < 2) {
        cout << "NO";
        return;
    }

    int height = 0, width = 0;
    range(i, 2, sqrt_double_area) {
        if(double_area%i == 0) {
            height = i;
            width = double_area / i;
            break;
        }
    }

    if(height == 0 || width == 0) {
        cout << "NO";
        return;
    }

    cout << "YES\n0 0\n";
    cout << "0 " << width << "\n";
    cout << height << " 0\n";

}



int main()
{

	faster_io;

	read();
	solve();

	return 0;
}
