#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 550000

class c {
public:
 int o;
 int t;
 bool operator<(c s) const {
   return o < s.o || o == s.o && t < s.t;
 }
};

int main(void)
{
 multiset<c, less<c> > s;
 int n;
 c e;
 int test;
 cin >> test;
 for (int as = 0; as < test; as++) 
 {
   cin >> n;
   if (n == 0)
         return 0;
   s.clear();
   while (n--) 
   {
     cin >> e.o >> e.t;
     s.insert(e);
   }
   set<c, less<c> >::iterator i, j;
   while (!s.empty()) 
   {
     i = s.begin();
     e.o = i->t;
     e.t = i->o;
     j = s.find(e);
     if (j == s.end()) 
     {
       cout << "NO" << endl;
       break;
     } 
     else 
     {
       s.erase(j);
       s.erase(i);
     }
   }
   if (s.empty())
     cout << "YES" << endl;
 }
   
   return 0;
}