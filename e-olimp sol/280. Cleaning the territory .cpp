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

#define l long
#define MAX 101

int main(int argc, char *argv[])
{
   l a,b;
           cin >> a >> b;
         while (a!=b)
                 if(a>b)        a -= b;
               else        b -= a;
   cout << a << endl;
   
   
   return EXIT_SUCCESS;
}