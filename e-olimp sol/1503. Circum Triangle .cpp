#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <math.h>
#include <queue>
#include <set>
#include <map>

using namespace std;

#define pb push_back

int n;
double r, seg, sum, area, alfa, c, ans;
vector<double> vec;

int main()
{

   while(cin >> n >> r, n + r)
   {
       vec.clear();
       for(int i = 0 ; i < n ; i ++)
       {
           double x;
           cin >> x;
           vec.pb(x);
       }
       sum = 0.0;

       sort(vec.begin(), vec.end());

       area = M_PI * r * r;
       for(int i = 0 ; i < n ; i ++)
           for(int j = i + 1 ; j < n ; j ++)
           {
               alfa = vec[j] - vec[i];
               alfa *= (M_PI / 180.0);
               seg = r * r / 2.0 * (alfa - sin(alfa));
               sum += (double)(j - i - 1) * (area - seg) + (double)(n - j + i - 1) * seg;
           }
       c = (double)n;
       c = c * (c - 1) * (c - 2) / 6.0;
       c = c * area;
       ans = c - sum;
//        cout.precision(0);
//        cout << fixed << (ans) << endl;
       printf("%.0lf\n", ans);
   }
   return 0;
}