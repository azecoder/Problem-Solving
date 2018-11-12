#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAXN 10001
#define pb push_back
#define mp make_pair
#define clr(a,b) memset(a,b,sizeof(a))

typedef pair<int,int> pr;


bool cmp (pr a, pr b) {
   if(a.second < b.second)
       return true;
   return false;
}


vector <pr> g;
int n, m, a[MAXN], b[MAXN];
int main(int argc, char *argv[])
{
   while(cin >> n >> m) {
       clr(a, 0);
       clr(b, 0);
       for(int i = 0; i < n; i++)
           cin >> a[i];
       for(int i = 0; i < n; i++) {
           cin >> b[i];
           g.pb(mp(a[i], b[i]));
       }
       
       sort(g.begin(), g.end(), cmp);
       
       vector <pr> :: iterator it;
       int start = m, time = 0, minn = m, maxx = m, flag = 0;
       for(it = g.begin(); it != g.end(); it++) {
           int a = it->first;
           //cout << start << " - " << minn << " - " << maxx << endl;
           if(a < minn || a > maxx) {
               time += abs(a - start);
               start = a;
               //cout << time << " ";
           }
           int b = it->second;
           if(time > b) {
               cout << -1 << endl;
               flag = 1;
               break;
           }
           minn = min(minn, a);
           maxx = max(maxx, a);
       }
       if(flag == 0)   cout << time << endl;
       g.clear();
   }
       
   
   return EXIT_SUCCESS;
} 