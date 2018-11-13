#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

double h,c;
double Stam,Syan,Sot;

int main()
{
   double n, a;
        cin >> n >> a;

   c=sqrt(2)*n*cos(a*M_PI/180);

   h=n*sin(a*M_PI/180);
   Sot=c*c;
   Syan=2*c*sqrt((h*h+(c*c/4)));
   Stam=Sot+Syan;

   cout.setf(ios::fixed);
   cout.precision(3);
   cout << Stam << endl;

   
   return EXIT_SUCCESS;
}