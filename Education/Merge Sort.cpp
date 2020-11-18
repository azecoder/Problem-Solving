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

#define dbg(x)          cerr << #x << " = " << x << endl



using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair<double, int> pdi;
typedef vector<pdi> vdi;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;
const int MX = 3e5 + 5;


void mergeArr(int *arr, int left, int right) {

    int mid = (left + right) / 2;
    int li = left, ri = mid + 1, idx = 1;

    int *temp = new int [right - left + 1];

    while(li <= mid && ri <= right) {
        if(arr[li] < arr[ri]) {
            temp[idx++] = arr[li++];
        } else {
            temp[idx++] = arr[ri++];
        }
    }
    while(li <= mid)    temp[idx++] = arr[li++];
    while(ri <= right)  temp[idx++] = arr[ri++];

    range(i, left, right) {
        arr[i] = temp[i - left + 1];
    }

}

void mergeSort(int *&arr, int left, int right) {

    if(left == right) return;

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    mergeArr(arr, left, right);

}

int N;

int main() {

    faster_io;

    cin >> N;

    int *arr = new int[N + 1];
    range(i, 1, N) cin >> arr[i];

    mergeSort(arr, 1, N);

    range(i, 1, N) cout << arr[i] << " ";

    return 0;
}
