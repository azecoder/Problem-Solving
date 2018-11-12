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
  int h,m;
  double anglehour,angleminute,cavab;
  
  while(cin>>h>>m)
  {
      if(h==0 && m==0)
      break;
      
      anglehour=(60*h+m)*0.5;
      angleminute=6*m;
      
      cavab=fabs(anglehour-angleminute);
      
      
      if(cavab>180)
      cavab=360-cavab;
      
      if(m<=9)
      {
          cout.setf(ios::fixed);
          cout.precision(1);
          cout<<"At "<<h<<":0"<<m<<" the angle is "<<cavab<<" degrees."<<endl;
      }
      else
      {
          cout.setf(ios::fixed);
          cout.precision(1);
          cout<<"At "<<h<<":"<<m<<" the angle is "<<cavab<<" degrees."<<endl;
      }
  }
   
   return EXIT_SUCCESS;
}