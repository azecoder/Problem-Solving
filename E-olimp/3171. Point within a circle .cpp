#include <cstdlib>
#include <iostream>
#include <math.h>

struct coord { int x,y,r; };
struct coord o,a;

using namespace std;

int main(int argc, char *argv[])
{

  cin>>o.x>>o.y>>o.r>>a.x>>a.y;

  if(sqrt((a.x-o.x)*(a.x-o.x)+(a.y-o.y)*(a.y-o.y))<=o.r)
     cout<<"YES"<<endl;
  else
     cout<<"NO"<<endl;


     return EXIT_SUCCESS;
}