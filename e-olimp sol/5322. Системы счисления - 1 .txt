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

#define MAX 100001
#define ll long long

int main()
{
  char a[MAX],b[MAX];
  
  cin >> a;

  ll j = 0;
  ll say = 0, eded = 0;;
  ll p = 1;
  for(ll i = strlen(a)-1; i >= 0; i --)
  {
      say++;

      eded += p*(a[i]-48);
      p *= 2;

      if(say%4 == 0 || i == 0)
      {
          if(eded <= 9)    b[j++] = eded + 48;
          else
          {
              if(eded == 10)       b[j++] = 'A';
              else if(eded==11)    b[j++]='B';
              else if(eded==12)    b[j++]='C';
              else if(eded==13)    b[j++]='D';
              else if(eded==14)    b[j++]='E';
              else if(eded==15)    b[j++]='F';
          }

          p = 1;
          eded = 0;
      }

  }

  b[j] = '\0';

  for(ll i = strlen(b)-1; i >= 0; i --)
  {
      if(b[i] >= 97 && b[i] <= 122)
          cout << (char)(b[i]-32);
      else
          cout << b[i];
  }

  cout << endl;

   
   
   return EXIT_SUCCESS;
}