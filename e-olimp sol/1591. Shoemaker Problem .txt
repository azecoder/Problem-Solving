#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool theTruthIsOutThere(const pair<double,int> &a, const pair<double,int> &b) {
if (a.first == b.first) {
  return a.second < b.second;
}

return a.first > b.first;
}

int main(void) {
int n, t, f;

vector< pair<double,int> > v;

  while(scanf("%d",&n)!=EOF){
  
   v.clear();
   for (int i = 0; i < n; i++) {
     cin >> t >> f;
     v.push_back(make_pair(f*1.0/t, i+1));
   }

   sort(v.begin(), v.end(), theTruthIsOutThere);

   for (int i = 0, sz = v.size(); i < sz; i++) {
     if (i > 0)
       cout << " ";
     cout << v[i].second;
   }
   cout << endl;
  }

return 0;
}