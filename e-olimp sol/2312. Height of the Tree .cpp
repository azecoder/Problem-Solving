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

using namespace std;

struct node
{
  long data;
  node * left;
  node * right;

  node(long x)
  {
      data = x;
      left = NULL;
      right = NULL;
  }
};

void Insert(long x, node * &r)
{
  if(r==NULL)
      r=new node(x);
  else
  {
      if(r->data==x)
      return;

      if( x < r->data )
          Insert(x, r->left);
      else
          Insert(x, r->right);
  }
}

long height(node * &r)
{
  if(r==NULL) return 0;
  return max(height(r->left), height(r->right))+1;
}
int main()
{
  long n, x;
  node* root = NULL;

  while(1)
  {
      cin>>x;

      if(x==0)
          break;

      Insert(x,root);
  }

  cout<<height(root)<<endl;

  return 0;
}