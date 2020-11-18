#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define size 1001
#define ll long long

int main(int argc, char *argv[])
{
 ll v,t,istiqamet,yol,cavab,a;
 cin>>v>>t;
 
 yol=(v%109)*(t%109);
 yol=abs(yol);

 a=yol%109;

 if(v>=0)
   cout<<a<<endl;
 else if(a==0)
   cout<<0<<endl;
 else
   cout<<109-a<<endl;



return EXIT_SUCCESS;
}