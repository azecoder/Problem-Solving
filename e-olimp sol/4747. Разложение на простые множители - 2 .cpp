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

using namespace std;

#define size 100001
#define ll long long

int main(int argc, char *argv[])
{
  long n, i, j = 1, a[size], say = 1;
  cin >> n;

  while(n != 1)
  {
      for(i = 2; i <= n; i ++)
      if(n%i == 0)
      {
          a[j++] = i;
          n /= i;
          break;
      }
  }

  j--;

  for(i = 1; i <= j; i ++)
     if(a[i] == a[i+1])  say ++;
  else
  {
      cout << a[i] << " " << say << endl;
      say = 1;
  }


  return EXIT_SUCCESS;
}