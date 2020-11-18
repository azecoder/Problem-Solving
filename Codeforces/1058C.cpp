#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define MX              400005


using namespace std;

int N;
string ticket_number;
int sumArr[105][105];
int answer = 0;

inline void read()
{

    cin >> N >> ticket_number;

}


void dfs(int index, int value)
{

    cerr << index << "   ---  " << value << "\n\n";

    if(sumArr[index][index] == value) {
        if(index == N-1)
            answer = 1;
        dfs(index + 1, value);
    }

    range(i, index+1, N-1) {

        cerr << "value : " << sumArr[index][i] << "\n";
        if(sumArr[index][i] == value) {
            if(i == N-1) {
                answer = 1;
                return;
            } else {
                dfs(i+1, value);
            }
        }

    }
    return;

}


inline void solve()
{

    range(i, 0, N-1) {

        sumArr[i][i] = (int)ticket_number[i] - 48;
        range(j, i+1, N-1) {

            sumArr[i][j] = sumArr[i][j - 1] + (int)ticket_number[j] - 48;

        }

    }

    if(N == 2) {
        if(ticket_number[0] == ticket_number[1])
            cout << "YES";
        else
            cout << "NO";
        return;
    }

    range(i, 1, N-2) {
        dfs(i, sumArr[0][i-1]);
        if(answer) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";

}



int main()
{

	faster_io;

	read();
	solve();

	return 0;
}
