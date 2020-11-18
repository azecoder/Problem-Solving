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

bool comp(pii A, pii B) {
    if(A.st != B.st) {
        return A.st < B.st;
    }
    return A.nd < B.nd;
}

void printQuerySums(int arr[], int N, pii query[], int M) {

    sort(query, query + M, comp);

    int currL = 0, currR = 0, currSum = 0;

    range(i, 0, M - 1) {
        int L = query[i].st;
        int R = query[i].nd;

        while(currL < L) {
            currSum -= arr[currL++];
        }
        // cerr << currL << " - " << L << " : " << currSum << "\n";
        while(currL > L) {
            currSum += arr[--currL];
        }
        // cerr << currL << " - " << L << " : " << currSum << "\n";
        while(currR <= R) {
            currSum += arr[currR++];
        }
        // cerr << currR << " - " << R << " : " << currSum << "\n";
        while(currR > R + 1) {
            currSum -= arr[--currR];
        }
        // cerr << currR << " - " << R << " : " << currSum << "\n";
        cout << "SUM(" << L << ", " << R << ") = " << currSum << "\n";
    }

}

int main() {

    faster_io;

    int arr[9] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int N = sizeof(arr)/sizeof(arr[0]);
    pii query[3] = {{0, 4}, {1, 3}, {2, 4}};
    int M = sizeof(query)/sizeof(query[0]);

    printQuerySums(arr, N, query, M);

    return 0;
}
