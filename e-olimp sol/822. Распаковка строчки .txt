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

#define MAX 1000000
#define ll long long

int main(int argc, char *argv[])
{
  char a[MAX];
  ll i,j,eded,say=0;
  cin>>a;

  if(strlen(a)==1)
  {
      cout<<a[0]<<endl;
      return 0;
  }

  for(i=0; i<strlen(a); i++)
  {
      if(!isalpha(a[i]) && !isalpha(a[i+1]))
      {
          eded=(a[i]-48)*10+a[i+1]-48;

          for(j=1; j<=eded; j++)
          {
              cout<<a[i+2];
              say++;

              if(say==40)
              {
                  if(i!=(strlen(a)-3))
                  cout<<endl;
                  say=0;
              }
          }
      }
      else if(!isalpha(a[i]) && (isalpha(a[i-1]) || i==0))
      {
          for(j=1; j<=(a[i]-48); j++)
          {
              cout<<a[i+1];
              say++;

              if(say==40)
              {
                  if(i!=(strlen(a)-2))
                  cout<<endl;
                  say=0;
              }
          }
      }
      else if((isalpha(a[i]) && isalpha(a[i-1])) || (isalpha(a[i]) && i==0))
      {
          cout<<a[i];
          say++;

          if(say==40)
          {
              if(i!=(strlen(a)-1))
              cout<<endl;
              say=0;
          }
      }
  }

  cout<<endl;

   
   return EXIT_SUCCESS;
}