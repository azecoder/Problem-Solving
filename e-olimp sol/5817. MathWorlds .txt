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

#define MAX 101
#define ll long long

int main()
{

long x, y, z;   
  cin >> x >> y >> z;

char ch;
long cnt = 0;
  if(x+y == z)
  {
      ch = '+';
      cnt ++;
  }

  if(x-y == z)
  {
      ch = '-';
      cnt ++;
  }

  if(x*y == z)
  {
      ch = '*';
      cnt ++;
  }

  if(y != 0 && x%y == 0 && x/y == z)
  {
      ch = '/';
      cnt ++;
  }

  if(cnt == 1)
      cout << ch << endl;
  else
      cout << "Invalid" << endl;


  return 0;
}