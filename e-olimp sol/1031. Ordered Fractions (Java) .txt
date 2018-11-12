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

#define ull unsigned long long
#define ll long long
#define MAX 10001
ull ebob(ull a, ull b)
{
  if(b==0)    return a;
  else           return ebob(b,a%b);
}

int main(int argc, char *argv[])
{
  ll n,i,j,a[MAX],b[MAX],m=1;
  double c[MAX];
  cin >> n;

  for(i = 1; i < n; i ++)
     for(j = n; j >= i+1; j --)
        if(ebob(i,j)==1)
        {
             a[m]=i;
             b[m]=j;
             c[m]=(double)i/(double)j;
             m++;
        }
        m--;

  for(i = 1; i < m; i ++)
     for(j = 1; j < m; j ++)
        if(c[j] > c[j+1])
        {
             swap(c[j],c[j+1]);
             swap(a[j],a[j+1]);
             swap(b[j],b[j+1]);
        }

  cout << "0/1" << endl;

  for(i = 1; i <= m; i++)
      cout << a[i] << "/" << b[i] << endl;

  cout << "1/1" << endl;


   
   return EXIT_SUCCESS;
}