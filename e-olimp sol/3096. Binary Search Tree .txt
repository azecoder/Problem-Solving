#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

// Node class
class Node {
   int key;
   Node* left;
   Node* right;
public:
   Node() { key=-1; left=NULL; right=NULL; };
   void setKey(int aKey) { key = aKey; };
   void setLeft(Node* aLeft) { left = aLeft; };
   void setRight(Node* aRight) { right = aRight; };
   int Key() { return key; };
   Node* Left() { return left; };
   Node* Right() { return right; };
};

// Tree class
class Tree {
    Node* root;
public:
    Tree();
    ~Tree();
    Node* Root() { return root; };
    void addNode(int key);
    void inOrder(Node* n);
    void preOrder(Node* n);
    void postOrder(Node* n);
private:
    void addNode(int key, Node* leaf);
    void freeNode(Node* leaf);
};

// Constructor
Tree::Tree() {
    root = NULL;
}

// Destructor
Tree::~Tree() {
    freeNode(root);
}

// Free the node
void Tree::freeNode(Node* leaf)
{
   if ( leaf != NULL )
   {
      freeNode(leaf->Left());
      freeNode(leaf->Right());
      delete leaf;
   }
}

// Add a node
void Tree::addNode(int key) {
    // No elements. Add the root
    if ( root == NULL ) {
       Node* n = new Node();
       n->setKey(key);
       root = n;
    }
    else {
      addNode(key, root);
    }
}

// Add a node (private)
void Tree::addNode(int key, Node* leaf) {
   if ( key <= leaf->Key() ) {
      if ( leaf->Left() != NULL )
         addNode(key, leaf->Left());
      else {
         Node* n = new Node();
         n->setKey(key);
         leaf->setLeft(n);
      }
   }
   else {
      if ( leaf->Right() != NULL )
         addNode(key, leaf->Right());
      else {
         Node* n = new Node();
         n->setKey(key);
         leaf->setRight(n);
      }
   }
}

// Print the tree post-order
// Traverse left sub-tree, right sub-tree, root
void Tree::postOrder(Node* n) {
   if ( n ) {
      postOrder(n->Left());
      postOrder(n->Right());
      cout << n->Key() << endl;
   }
}


// Test main program
int main() {
   int x;
   
  Tree* tree = new Tree();
   while(cin >> x)
   {
       tree->addNode(x);
   }

//  cout << "Post order traversal" << endl;
  tree->postOrder(tree->Root());
//  cout << endl;

  delete tree;
   
   
   return EXIT_SUCCESS;
}