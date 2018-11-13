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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

int a1, b1, c1, a2, b2, c2, s1, s2;

int main(int argc, char *argv[])
{
 cin>>a1>>b1>>c1;
 cin>>a2>>b2>>c2;
 s1 = a1 + b1 + c1;
 s2 = a2 + b2 + c2;
 if( s1 % 2 == 1 || s2 % 2 == 1 || a1 + b1 - c1 < 0 || a1 + c1 - b1 < 0 || b1 + c1 - a1 < 0 || a2 + b2 - c2 < 0 || a2 + c2 - b2 < 0 || b2 + c2 - a2 < 0 )
     cout<<"Drogba Wins"<<endl;
 else if( s1 == s2 )
     cout<<"Draw..."<<endl;
 else if( s1 > s2 )
     cout<<"Messi Wins"<<endl;
 else
     cout<<"Ronaldo Wins"<<endl;
 
 return EXIT_SUCCESS;
}