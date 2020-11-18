#include <bits/stdc++.h> // all c++ libraries

#define faster_io ios_base::sync_with_stdio(false);cin.tie()
#define MX 400005

using namespace std;

int N, D, M;
struct {
    int x, y;
} CORD[105];

inline void read()
{

    cin >> N >> D >> M;

    for( int i = 1; i <= M; i++ ) {

        cin >> CORD[i].x >> CORD[i].y;

    }

}


inline void solve()
{

    int area = 2 * D * (N - D);
//    cerr << "Area of the full area : " << area;

    for ( int i = 1; i <= M; i++ ) {

        int x = CORD[i].x;
        int y = CORD[i].y;

        int newArea =
            abs(x * D - y * 0 + 0 * 0 - D * D + D * y - 0 * x) +
            abs(x * 0 - y * D + D * (N-D) - N * 0 + N * y - (N-D) * x) +
            abs(x * (N-D) - N * y + N * N - (N-D) * (N-D) + (N-D) * y - x * N) +
            abs(x * N - y * (N-D) + (N-D) * D - N * 0 + 0 * y - D * x);

        newArea /= 2;

        if( area == newArea ) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";

//        cerr << "\n\t For grasshopper " << i << " : " << newArea;

    }

}



int main()
{

	faster_io;

	read();
	solve();

	return 0;
}
