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
#define ll long long

  stack <int> s;

ll i, j = 1, n, a[MAX], b[MAX];
  
int main(int argc, char *argv[])
{
  cin >> n;
  for(i = 1; i <= n; i ++)
     cin >> a[i];

  s.push(a[1]);

  for(i = 2; i <= n; i ++)
  {
      if(a[i] < s.top())    s.push(a[i]);
      else
      {
          while(a[i] > s.top())
          {
              b[j++] = s.top();
              s.pop();

              if(s.empty())    break;
          }
          s.push(a[i]);
      }
  }

  while(!s.empty())
  {
      b[j++] = s.top();
      s.pop();
  }
  j--;


  for(i=1; i<j; i++)   
          if(b[i]+1==b[i+1])   continue;
          else                 break;

  if(i == j)                 cout << "YES" << endl;
  else                         cout << "NO" << endl;


  return EXIT_SUCCESS;
}