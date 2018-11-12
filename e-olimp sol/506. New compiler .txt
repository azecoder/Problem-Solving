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

int main(int argc, char *argv[])
{
  string a,b;
  int i,j,flag=0;

  while(getline(cin,a))
  {
      j=0;
      flag=0;

      for(i=0; i<a.size();)
      {
          if(a[i]=='/' && a[i+1]=='/')
          flag=1;

          if(flag==0 && a[i]=='-' && a[i+1]=='>')
          {
              b[j]='.';
              j++;
              i+=2;
          }
          else
          {
              b[j]=a[i];
              j++;
              i++;
          }
      }

      for(i=0; i<j; i++)
          cout<<b[i];
          cout<<endl;
  }


   
   return EXIT_SUCCESS;
}