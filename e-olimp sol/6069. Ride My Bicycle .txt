#include <iostream>
#include <algorithm>
#include <memory.h>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>
/*
programmjs944459
*/

#define MAXN 100100
#define fr first
#define sc second
#define pb push_back
#define mk make_pair

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll , ll> pl;

double ff[5];
double bb[10];
multiset<pair<double,pair<int,int> > > st;
multiset<pair<double,pair<int,int> > >::iterator iter;

int main()
{
   /*
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   */
   ios_base::sync_with_stdio(false);
   cin.tie();

   for (int i = 1; i <= 3; i++) cin >> ff[i];
   for (int i = 1; i <= 7; i++) cin >> bb[i];

   for (int i = 1; i <= 3; i++) {
       for (int j = 1; j <= 7; j++) {
           st.insert(mk(ff[i]/bb[j],mk(i,j)));
       }
   }
   for (iter = st.begin(); iter != st.end(); ++iter) {
       cout.precision(2);
       cout << fixed << (*iter).fr << " " << (*iter).sc.fr << " " << (*iter).sc.sc << endl;
   }

   return 0;
} 