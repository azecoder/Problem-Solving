#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int needed , n , money;

/*
   10 2 1  -   4
   22 4 1  -   4
   60 5 6  -   11
*/

int main()
{
   ios_base::sync_with_stdio(false);

   while (cin >> needed >> n >> money)
   {
       int ans = 1;
       int food = n;
       while (food < needed)
       {
//            double q = (needed * 1.0)/ (food/money + n);
//            double p = ((needed - food) * 1.0)/ (n);

           int numb = food / money;
           int curr = food - ( numb * money );
//            cout << numb << "   " << curr << endl;
           double q = ((needed - curr) * 1.0) / (numb + n);
           double p = ((needed - food) * 1.0) / n;
//            cout << q << " --- " << p << endl;
//            cout << n << " --> " << numb + n << endl << endl;
           if (q <= p)
           {
               food -= ( numb * money );
               n += numb;
           }
           food += n;
           ans++;
       }
       cout << ans << endl;
   }

   return 0;
} 