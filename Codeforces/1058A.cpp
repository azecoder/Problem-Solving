#include <bits/stdc++.h> // all c++ libraries

#define faster_io ios_base::sync_with_stdio(false);cin.tie()
#define MX 400005

using namespace std;

int N, x;
string answer = "EASY";

inline void read()
{

    cin >> N;
    for( int i = 0; i < N; i++ ) {

        cin >> x;
        if(x)
            answer = "HARD";

    }

}


inline void solve()
{

    cout << answer;

}



int main()
{

	faster_io;

	read();
	solve();

	return 0;
}
