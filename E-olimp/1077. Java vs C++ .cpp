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

#define MAX 10001

int main(int argc, char *argv[])
{
  string a,b;
  int i,j,flag;

  while(getline(cin,a))
  {
      j=0;
      flag=0;

      if(a[a.size()-1]=='_' && flag==0)
      {
          cout<<"Error!"<<endl;
          flag=1;
      }

      if(a[0]=='_' && flag==0)
      {
          cout<<"Error!"<<endl;
          flag=1;
      }

      if(a[0]>=65 && a[0]<=90 && flag==0)
      {
          cout<<"Error!"<<endl;
          flag=1;
      }

      for(i=0; i<a.size(); i++)
      {
          if(a[i]=='_' && a[i+1]>=65 && a[i+1]<=90 && flag==0)
          {
              cout<<"Error!"<<endl;
              flag=1;
          }
          else if(a[i]=='_' && a[i+1]=='_' && flag==0)
          {
              cout<<"Error!"<<endl;
              flag=1;
          }

          if(a[i]=='_' && a[i+1]>=97 && a[i+1]<=122 && flag==0)
          {
              i++;
              b[j]=a[i]-32;
              j++;
          }
          else if(a[i]>=65 && a[i]<=90 && flag==0)
          {
              b[j]='_';
              b[j+1]=a[i]+32;
              j+=2;
          }
          else if(flag==0)
          {
              b[j]=a[i];
              j++;
          }
      }

      if(flag==0)
      {
          for(i=0; i<j; i++)
              cout<<b[i];
              cout<<endl;
      }
  }


   return EXIT_SUCCESS;
}