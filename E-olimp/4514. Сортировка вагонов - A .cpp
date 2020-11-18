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

#define MAX 10001
#define size 1002
#define ll long long

  stack <int> s;
  
ll i, j = 1, k = 1, h = 1, n, a[MAX], b[MAX], c[MAX], sayc = 1, d[MAX], sayd = 0;

int main(int argc, char *argv[])
{

  cin >> n;
  
  for(i = 1; i <= n; i ++)
     cin >> a[i];

  s.push(a[1]);
  for(i = 2; i <= n; i ++)
  {
      if(a[i] < s.top())
      {
          s.push(a[i]);
          sayc ++;
      }
      else
      {
          c[k++] = sayc;
          sayc = 1;

          while(a[i] > s.top())
          {
              b[j++] = s.top();
              s.pop();
              sayd ++;

              if(s.empty())
              break;
          }

          d[h++] = sayd;
          s.push(a[i]);
          sayd = 0;
      }
  }

  c[k++] = sayc;

  while(!s.empty())
  {
      b[j++] = s.top();
      s.pop();
      sayd ++;
  }

  d[h++] = sayd;
  k--; h--; j--;

  for(i=1; i<j; i++)
     if(b[i]+1==b[i+1])   continue;
     else                 break;

  if(i == j)
  {
      for(i = 1; i <= k; i ++)
          cout << "1 " << c[i] << endl << "2 " << d[i] << endl;
  }
  else
      cout << "0" << endl;;

  return EXIT_SUCCESS;
}