#include <iostream>
#include <algorithm>
#include <stdio.h>

#define SIZE 70001
#define f first
#define s second
#define MP make_pair

using namespace std;

typedef pair<int,int> PR;

pair <int,int> a[SIZE];
int n;

int compare(PR a , PR b) {
  return a.f == b.f ? a.s < b.s : a.f < b.f;
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i].f , a[i].s = i + 1;
  sort(a , a + n , compare);
 
  int t;
  cin >> t;
  while (t--) {
      int l , r , p;
      cin >> l >> r >> p;
     
      int pos1 = lower_bound(a , a + n , MP(p,l)) - a;
      int pos2 = upper_bound(a , a + n , MP(p,r)) - a;
      if (pos1 != pos2) cout << "1";
      else cout << "0";
  }
  cout << endl;
 
 
  return 0;
} 