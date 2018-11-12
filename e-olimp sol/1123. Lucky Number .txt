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

#define ll long long
#define MAX 100001

double mesafe(int a, int b, int c, int d)
{
  return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}

int main(int argc, char *argv[])
{
 ll i,n,a[MAX],cem,cem1,temp;
 cin >> n;
 for(i = 1; i <= n; i ++)
    cin >> a[i];
 
 for(i = 1; i <= n; i ++)
 {
          cem = 0;
       cem1 = 0;
          
          
      if(a[i]%8==0)
          cout<<"Lucky number!"<<endl;
          
      else
      {
          temp=a[i];
          while(temp!=0)
          {
              cem=cem+(temp%10);
              cem1=cem1+(temp%10)*(temp%10);
              temp=temp/10;
          }
              
          if(cem%8==0)
              cout<<"Lucky number!"<<endl;
          else if(cem1%8==0)
              cout<<"Lucky number!"<<endl;
          else
              cout<<"What a pity!"<<endl;             
          }
 }
   
   return EXIT_SUCCESS;
}