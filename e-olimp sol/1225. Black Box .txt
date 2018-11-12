#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;


int main()
{
   int t;

       int n, m, x;
       scanf("%d %d", &n, &m );
       queue< int > add, get;
       for ( int i = 0; i < n; ++i ) {
           scanf( "%d", &x );
           add.push( x );
       }
       for ( int i = 0; i < m; ++i ) {
           scanf( "%d", &x );
           get.push( x );
       }
       int cnt = 0;
       priority_queue< int, vector< int >, greater< int > > MinHeap;
       priority_queue< int, vector< int >, less< int > > MaxHeap;

       while ( !add.empty() ) {

           if ( !MinHeap.empty() && add.front() > MaxHeap.top() )
               MinHeap.push( add.front() );
           else
               MaxHeap.push( add.front() );
           add.pop();

           while ( !get.empty() && MaxHeap.size() + MinHeap.size() == get.front() ) {
               while ( MaxHeap.size() != cnt ) {
                   if ( MaxHeap.size() < cnt ) {
                       MaxHeap.push( MinHeap.top() );
                       MinHeap.pop();
                   }
                   else if ( MaxHeap.size() > cnt ) {
                       MinHeap.push( MaxHeap.top() );
                       MaxHeap.pop();
                   }
               }

               printf( "%d\n", MinHeap.top() );
               ++cnt, get.pop();
           }
       }

   return 0;
}





----------------------------------------------------------------------------------------------------------------





#include <iostream>
#include <algorithm>
#include <vector>

#define MAXN 30001

using namespace std;

int a[MAXN] , u[MAXN];
int Maxheap[MAXN] , Minheap[MAXN];
int n , m , Minl , Maxl;

void addMin(int ch) {
  if (ch == 1) return;
  int parent = ch / 2;
  if (Minheap[ch] < Minheap[parent]) {
      swap(Minheap[ch] , Minheap[parent]);
      addMin(parent);
  }
}

void delMin(int root) {
  int left = 2 * root;
  int right = 2 * root + 1;
  if (Minheap[left] < Minheap[root] && left <= Minl) {
      swap(Minheap[left] , Minheap[root]);
      delMin(left);
  }
  if (Minheap[right] < Minheap[root] && right <= Minl) {
      swap(Minheap[right] , Minheap[root]);
      delMin(right);
  }
}

void insertMin(int k) {
  Minheap[++Minl] = k;
  addMin(Minl);
}

void removeMin() {
  Minheap[1] = Minheap[Minl--];
  delMin(1);
}

void addMax(int ch) {
  if (ch == 1) return;
  int parent = ch / 2;
  if (Maxheap[ch] > Maxheap[parent]) {
      swap(Maxheap[ch] , Maxheap[parent]);
      addMax(parent);
  }
}

void delMax(int root) {
  int left = 2 * root;
  int right = 2 * root + 1;
  if (Maxheap[left] > Maxheap[root] && left <= Maxl) {
      swap(Maxheap[left] , Maxheap[root]);
      delMax(left);
  }
  if (Maxheap[right] > Maxheap[root] && right <= Maxl) {
      swap(Maxheap[right] , Maxheap[root]);
      delMax(right);
  }
}

void insertMax(int k) {
  Maxheap[++Maxl] = k;
  addMax(Maxl);
}

void removeMax() {
  Maxheap[1] = Maxheap[Maxl--];
  delMax(1);
}

int main()
{
  ios_base::sync_with_stdio(false);
 
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
      cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
      cin >> u[i];
  }
  int idx = 0 , j = 1;
  for (int i = 1; i <= n; i++) {
      if (Minl != 0 && a[i] > Maxheap[1])
          insertMin(a[i]);
      else
          insertMax(a[i]);
      while (j <= m && (Minl + Maxl == u[j])) {
          while (Maxl != idx) {
              if (Maxl < idx) {
                  insertMax(Minheap[1]);
                  removeMin();
              }
              if (Maxl > idx) {
                  insertMin(Maxheap[1]);
                  removeMax();
              }        
          }
          cout << Minheap[1] << endl;
          idx++; j++;
      }    
  }
 
  return 0;
} 