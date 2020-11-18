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


class Tree {
public:
    int *arr, *temp;
    int len;
    Tree() {};
    Tree(int inp_len, int *inp_arr);
    void create();
    void update(int ll, int rr, int val);
    int getMin(int ll, int rr);
private:
    void create(int left, int right, int index);
    void update(int ll, int rr, int val, int left, int right, int index);
    int getMin(int ll, int rr, int left, int right, int index);
};

Tree::Tree(int inp_len, int *inp_arr) {
    arr = new int[inp_len];
    range(i, 1, inp_len) {
        arr[i] = inp_arr[i];
    }
    temp = new int[4 * inp_len];
    len = inp_len;
}

void Tree::create() {
    create(1, len, 1);
}

void Tree::create(int left, int right, int index) {
    if(left == right) {
        temp[index] = arr[left];
        return;
    }

    int mid = (left + right) / 2;
    create(left, mid, index * 2);
    create(mid + 1, right, index * 2 + 1);

    temp[index] = min(temp[index * 2], temp[index * 2 + 1]);
}

int Tree::getMin(int ll, int rr) {
    return getMin(ll, rr, 1, len, 1);
}

void Tree::update(int ll, int rr, int val) {
    update(ll, rr, val, 1, len, 1);
}

void Tree::update(int ll, int rr, int val, int left, int right, int index) {
    if(ll > len || ll > rr || rr < 0) {
        cerr << "INVALID INPUT\n";
        return;
    }

    if(left > rr || right < ll) {
        return;
    }

    if(left >= ll && right <= rr) {
        temp[index] += val;
        return;
    }

    int mid = (left + right) / 2;
    update(ll, rr, val, left, mid, index * 2);
    update(ll, rr, val, mid + 1, right, index * 2 + 1);
    temp[index] = min(temp[index * 2], temp[index * 2 + 1]);
    return;
}

int Tree::getMin(int ll, int rr, int left, int right, int index) {
    if(ll > len || ll > rr || rr < 0) {
        cerr << "INVALID INPUT\n";
        return -1;
    }

    if(left >= ll && right <= rr && left == right) {
        return temp[index];
    }

    if(left > rr || right < ll) {
        return INT_MAX;
    }

    int mid = (left + right) / 2;
    int t1 = getMin(ll, rr, left, mid, index * 2);
    int t2 = getMin(ll, rr, mid + 1, right, index * 2 + 1);
    return min(t1, t2);
}

int main() {

    faster_io;

    int arr[10] = {0, 7, 3, 5, 1, 9, 4, 8, -2, 1};
    int N = sizeof(arr) / sizeof(arr[0]);

    Tree *tree = new Tree(N, arr);

    tree->create();

    cout << tree->getMin(3, 8) << "\n";
    tree->update(8, 9, 6);
    cout << tree->getMin(4, 8) << "\n";

    return 0;
}

