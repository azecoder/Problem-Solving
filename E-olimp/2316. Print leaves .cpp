#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

#define ll long long
#define MAX 100001

ll a[MAX],l;
void quicksort(long  lo, long hi){
  ll r;
  r=a[(lo+hi)/2];
  ll i,j;
  i=lo; j=hi;
  do{

      while(a[i]<r) i++;
      while(a[j]>r) j--;
      if(i<=j)
      {
          int x;
          x=a[i]; a[i]=a[j]; a[j]=x;i++;j--;}

  }while(i<=j);
  if(lo<j)quicksort(lo,j);
  if(hi>i)    quicksort(i, hi);
}

struct node{
  ll key_value;
  ll  hi;
  node *left;
  node *right;
};
class btree{

  public :
      void insert(ll key);
  private :
      void insert(ll key, node *leaf);

  };
      node *root=NULL;
  btree m;

void btree::insert(ll key, node *leaf){
  if(key<leaf->key_value){
      if(leaf->left!=NULL)
          insert(key,leaf->left);
      else{

          leaf->left=new node;
          leaf->left->key_value=key;
          leaf->left->left=NULL;
          leaf->left->right=NULL;
      }
  }
  else{
      if(key>leaf->key_value)
          if(leaf->right!=NULL)
              insert(key, leaf->right);
          else{
              leaf->right=new node;
              leaf->right->key_value=key;
              leaf->right->left=NULL;
              leaf->right->right=NULL;
          }
  }
}
void  btree::insert(ll key){
  if(root!=NULL)
      insert(key,root);
  else
  {
      root=new node;
      root->key_value=key;
      root->left=NULL;
      root->right=NULL;
  }

}
void check(node * leaf){
  if(leaf!=NULL){
      if(leaf->left==NULL && leaf->right==NULL)
          a[l++]=leaf->key_value;
          else{
      if(leaf->left!=NULL)check(leaf->left);
      if(leaf->right!=NULL)check(leaf->right);
  }
      }
      return ;

}
int main(int argc, char *argv[])
{
  ll n;
  cin>>n;
  while(n){

      m.insert(n);

      cin>>n;
  }
  check(root);
  quicksort(0,l-1);
if(l){
  for(int i=0;i<l-1;i++)
      cout<<a[i]<<" ";
      cout<<a[l-1]<<endl;
  }
  else
  cout<<endl;

  return EXIT_SUCCESS;
}