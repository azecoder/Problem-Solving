#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<pair<int,int> > out;

void f(int a , int b , int _a , int _b) {
   if (b + _b > n)
       return;
   int n_a = a + _a;
   int n_b = b + _b;
   f(a,b,n_a,n_b);
   out.push_back(make_pair(n_a,n_b));
   f(n_a,n_b,_a,_b);
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie();
   
   int t;

   cin >> t;
   while (t--) {
       cin >> n;
       out.clear();
       f(1,1,0,1);
       for (int i = (int)out.size() - 1; i > 0; i--) {
           cout << out[i].first << "/" << out[i].second << ", ";
       }
       cout << out[0].first << "/" << out[0].second << endl;
   }
   return 0;
} 
