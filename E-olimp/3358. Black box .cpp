#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <set>

#define MAXN 1000009

using namespace std;

struct myPair
{
   int first , second;

   myPair(int a , int b) : first(a) , second(b)
   {
   }

   bool operator < (const struct myPair& item) const
   {
       if (item.first < first)
           return true;
       if (item.first == first)
           if (item.second > second)
               return true;
       return false;
   }
};

set<myPair> box;
int a[MAXN] , n;

int main()
{
   ios_base::sync_with_stdio(false);

   cin >> n;
   for (int i = 1; i <= n; i++)
   {
       char c;
       int x;
       cin >> c >> x;
       if (c == '+')
       {
           if (box.find(myPair(a[x], x)) != box.end())
               box.erase(myPair(a[x],x));

           a[x]++;
           box.insert(myPair(a[x],x));
       }
       else if (c == '-')
       {
           box.erase(myPair(a[x],x));
           a[x]--;
           if (a[x] != 0)
               box.insert(myPair(a[x],x));
       }
       if (box.empty())
           cout << 0 << endl;
       else
       {
           myPair ans = *box.begin();
           cout << ans.second << endl;
       }
   }

   return 0;
} 