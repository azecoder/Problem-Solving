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


class Node {
public:
    int key;
    Node *left, *right;
    Node() {}
    Node(int key) {
        this->key = key;
        this->left = this->right = NULL;
    }
};

class Tree {
    Node *root;
public:
    Tree() {
        root = NULL;
    }
    Node *ROOT() {
        return root;
    }
    void addNode(int val);
    void inorder(Node *leaf);
    int getMax();
    int getMin();
    int isBST();
    int maxSum();
private:
    int maxSum(Node *leaf, int &sum);
    void addNode(int val, Node* leaf);
    int isBST(Node *leaf, int mn, int mx);
};

void Tree::addNode(int val) {
    if(root == NULL) {
        root = new Node(val);
    } else {
        addNode(val, root);
    }
}

void Tree::addNode(int val, Node *leaf) {
    if(leaf->key < val) {
        if(leaf->right == NULL) {
            leaf->right = new Node(val);
        } else {
            addNode(val, leaf->right);
        }
    } else {
        if(leaf->left == NULL) {
            leaf->left = new Node(val);
        } else {
            addNode(val, leaf->left);
        }
    }
}

void Tree::inorder(Node *leaf) {
    if(leaf) {
        inorder(leaf->left);
        cout << leaf->key << " ";
        inorder(leaf->right);
    }
}

int Tree::getMax() {
    if(root == NULL) {
        return -1;
    }
    Node *leaf = root;
    while(leaf->right != NULL) {
        leaf = leaf->right;
    }
    return leaf->key;
}

int Tree::getMin() {
    if(root == NULL) {
        return -1;
    }
    Node *leaf = root;
    while(leaf->left != NULL) {
        leaf = leaf->left;
    }
    return leaf->key;
}

int Tree::isBST() {
    return isBST(root, INT_MIN, INT_MAX);
}

int Tree::isBST(Node *leaf, int mn, int mx) {

    if(leaf == NULL) {
        return 1;
    }

    if(leaf->key < mn || leaf->key > mx) {
        return 0;
    }

    return (isBST(leaf->left, mn, leaf->key + 1) && isBST(leaf->right, leaf->key + 1, mx));

}

int Tree::maxSum() {
    int ret = INT_MIN;
    maxSum(root, ret);
    return ret;
}

int Tree::maxSum(Node *leaf, int &sum) {
    if(leaf == NULL) {
        return 0;
    }

    int l = maxSum(leaf->left, sum);
    int r = maxSum(leaf->right, sum);

    int max_single = max(max(l, r) + leaf->key, leaf->key);

    int max_top = max(max_single, l + r + leaf->key);
    sum = max(sum, max_top);

    return max_single;
}

int main() {

    faster_io;

    Tree *tree = new Tree();
    int arr[10] = {5, 8, 4, 6, 1, 7, 3, 9, 2, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "ARRAY  :\t";
    rep(i, len) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    rep(i, len) {
        tree->addNode(arr[i]);
    }

    cout << "SORTED :\t";
    tree->inorder(tree->ROOT());
    cout << "\n";

    cout << "MAX : " << tree->getMax() << "\n";
    cout << "MIN : " << tree->getMin() << "\n";

    cout << "isBST : " << (tree->isBST() == 1 ? "Yes" : "No") << "\n";

    cout << "MaxSum : " << tree->maxSum() << "\n";

    return 0;
}
