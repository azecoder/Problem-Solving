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

#define MAX 1000001
#define ll long long

char x[MAX];
ll a,b,n,i,j,k,array[MAX],cnt=0,flag;

int main(int argc, char *argv[])
{
  cin >> a >> b;

  if(a > b)    swap(a,b);
  if(a == b && a == 1)
  {
      cout << "0" << endl;
      return 0;
  }

  for(i = 2; i <= b; i ++)
      array[i] = i;

  n = i - 1;

  for(i = 2; i * i <= n; i ++)
  {
      if(array[i] != 0)
      {
          for(j = i * i; j <= n; j += i)
              if(array[j]!=0)     array[j]=0;
      }
  }

  i = b;

  while(array[i] == 0)
  i --;

  n = i;

  for(i = a; i < n; i ++)
      if(array[i] != 0)
      {
          flag = false;
          itoa(array[i],x,10);
          for(k = 0; k < strlen(x); k ++)
              if(x[k] == '1' && x[k+1] == '3')
              {
                  flag = true;
                  break;
              }
      if(flag == false)    cnt++;
  }

  if(array[n] >= a && array[n] != 0)
  {
      flag = false;
      itoa(array[n], x, 10);
      for(k = 0; k < strlen(x); k ++)
          if(x[k] == '1' && x[k+1] == '3')
          {
              flag = true;
              break;
          }
      if(flag == false)    cnt++;
  }

  cout << cnt << endl;
  
    
   return EXIT_SUCCESS;
}