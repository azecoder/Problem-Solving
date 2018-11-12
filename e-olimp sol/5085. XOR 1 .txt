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

#define MAX 501

int main()
{
  int n;
         cin >> n;
  
  char a[MAX],b[MAX];
      cin>>a>>b;

  for(int i = 0; i < n; ++i)
      if(a[i] == b[i])        cout << "0";
      else                cout << "1";

  cout << endl;

   
   return EXIT_SUCCESS;
}