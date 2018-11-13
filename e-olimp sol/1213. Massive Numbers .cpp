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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

char ch1, ch2;
int a, b, c, d, n1, n2;

int main(int argc, char *argv[])
{
 cin >> a >> ch1 >> b >> c >> ch2 >> d;
 n1 = b * log(a);
 n2 = d * log(c);
 if(n1 > n2)
     cout << a << "^" << b << endl;
 else
     cout << c << "^" << d << endl;

    
   return EXIT_SUCCESS;
}