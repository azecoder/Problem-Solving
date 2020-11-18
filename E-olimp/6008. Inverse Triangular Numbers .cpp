#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm.>

using namespace std;

#define MAX 10001
#define ll long long

int main()
{
  ll x,y,n,i=0;

  while(cin >> n)
  {
      if(n == -1)    break;
      
      i++;
      x = sqrt(1+8*n);

      if(x*x != (1+8*n))       cout << "Case " << i << ": bad" << endl;
      else                        cout << "Case " << i << ": " << (x-1)/2 << endl;
  }

  return 0;
}