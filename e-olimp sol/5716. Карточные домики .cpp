#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

#define ull unsigned long long

int main(int argc, char *argv[])
{
   ull n;
       cin >> n;
   cout << (n*(1+n)/2)-n+(n*(n+1)) << endl;
   
   return EXIT_SUCCESS;
}