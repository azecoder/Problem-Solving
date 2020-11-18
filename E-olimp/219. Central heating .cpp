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

ll netice,h,w,l,k;

int main(int argc, char *argv[])
{
    cin>>h>>w>>l>>k;
   
   netice=h*w*l/k;
   if((h*w*l)%k==0)
       cout<<netice<<endl;
   else
       cout<<netice+1<<endl;
     
   
   return EXIT_SUCCESS;
}