#include <bits/stdc++.h> // all c++ libraries

// defines
#define faster_io       ios_base::sync_with_stdio(false);cin.tie()
#define rep(i,a)        for(int i=0;i<a;i++)
#define rrep(i,a)       for(int i=a-1,i>=0;i--)
#define range(i,a,b)    for(int i=a;i<=b;i++)
#define rrange(i,a,b)   for(int i=a;i>=b;i--)
#define rangev(i,a)     for(int i=0;i<a.size();i++)
#define rrangev(i,a)    for(int i=a.size()-1;i>=0;i--)
#define clr(a)          memset(a, 0, sizeof(a))
#define all(a)          a.begin(), a.end()
#define mp              make_pair
#define pb              push_back
#define st              first
#define nd              second
#define MX              200005


using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector <pii> vii;
typedef pair <int, pii> pip;

const ll INF = 1e9 + 100;
const ll MOD = 1e9 + 7;


class BIT {
public:
    int *BITree;
    BIT() {}
    int *create(int arr[], int len);
    void update(int len, int ind, int val);
    int firstSum(int ind);
    int rangeSum(int left, int right);
private:
    void initialize(int len);
};

void BIT::initialize(int len) {
    BITree = new int[len+1];
    range(i, 1, len) {
        BITree[i] = 0;
    }
}

int *BIT::create(int arr[], int len) {
    initialize(len);

    range(i, 1, len) {
        update(len, i, arr[i]);
    }

    return BITree;
}

void BIT::update(int len, int ind, int val) {
    while(ind <= len) {
        BITree[ind] += val;
        ind += ind & (-ind);
    }
}

int BIT::firstSum(int ind) {
    int ret = 0;
    while(ind > 0) {
        ret += BITree[ind];
        ind -= ind & (-ind);
    }
    return ret;
}

int BIT::rangeSum(int left, int right) {
    if(left == right) {
        return 0;
    }
    return firstSum(right) - firstSum(left);
}

int N;
int arr[MX];

int main() {

    faster_io;

    cerr << "Enter count of numbers in initial array\nEnter:\t";
    cin >> N;
    cerr << "Enter elements of array\nEnter:\t";
    range(i, 1, N) {
        cin >> arr[i];
    }

    BIT *tree = new BIT();
    tree->create(arr, N);
    cerr << "Initial Array:\t";
    int *uarr = tree->BITree;
    range(i, 1, N) {
        cerr << uarr[i] << " ";
    }
    cerr << "\n";

    cerr << "SELECT OPERATION (P:Print, U:Update, Others:Exit)\nSELECT:\t";
    char ch;
    while(cin >> ch) {
        if(ch == 'U') {
            cerr << "UPDATE: Enter index and value\nEnter:\t";
            int x, v;
            cin >> x >> v;
            tree->update(N, x, v);
            cerr << "Updated Array:\t";
            int *uarr = tree->BITree;
            range(i, 1, N) {
                cerr << uarr[i] << " ";
            }
            cerr << "\n";
        } else if(ch == 'P') {
            cerr << "PRINT: Enter index to get sum from A to B\nEnter:\t";
            int x, v;
            cin >> x >> v;
            cerr << "RESULT SUM("<< x << "," << v << "): ";
            cout << tree->rangeSum(x, v) << "\n";
        } else {
            return 0;
        }
        cerr << "SELECT OPERATION (P:Print, U:Update, Others:Exit)\nSELECT:\t";
    }

    return 0;
}
/*
12
2 1 1 3 2 3 4 5 6 7 8 9
*/
