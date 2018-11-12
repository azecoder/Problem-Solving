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

string s;
stack<pair<char,int> > st;

int main()
{
   /*
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   */
   ios_base::sync_with_stdio(false);
   cin.tie();

   int ans = 0;

   cin >> s;
   int l = s.length();
   st.push(mk(')',-1));
   for (int i = 0; i < l; i++) {
       if (s[i] == '(') {
           st.push(mk(s[i],i));
       } else if (s[i] == ')') {
           if (!st.empty() && st.top().fr == '(') {
               st.pop();
               ans = max(ans , i - st.top().sc);
           } else {
               st.push(mk(s[i],i));
           }
       }
   }
   cout << ans << endl;


   return 0;
} 