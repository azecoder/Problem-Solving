#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

using namespace std;

double x1, v1, z1, x2, v2, z2, x3, v3, z3;
int main()
{
   cin >> x1 >> v1 >> z1 >> x2 >> v2 >> z2 >> x3 >> v3 >> z3;
   double a = sqrt((x1 - x2) * (x1 - x2) + (v1 - v2) * (v1 - v2) + (z1 - z2) * (z1 - z2));
   double b = sqrt((x1 - x3) * (x1 - x3) + (v1 - v3) * (v1 - v3) + (z1 - z3) * (z1 - z3));
   double c = sqrt((x2 - x3) * (x2 - x3) + (v2 - v3) * (v2 - v3) + (z2 - z3) * (z2 - z3));

   double u = (a + b + c) / 2.0;
   double Area = sqrt(u * (u - a) * (u - b) * (u - c));
   double r1 = (a * b * c) / (4 * Area);
   double r2 = Area / u;
   
   double S1 = r1 * r1;
   double S2 = r2 * r2;
   if(S2/S1 < 0.001)        cout << "Zero!" << endl;
   else                     printf("%.3lf\n", S2 / S1);
   
   return 0;
} 
