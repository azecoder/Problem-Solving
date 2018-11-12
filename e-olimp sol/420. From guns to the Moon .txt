#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;
double mes1,mes2,r1,r2,x,y,earth,moon,c,d;

int main(int argc, char *argv[]) 
{
  cin>>x>>y;

  r1=sqrt((x-0)*(x-0)+(y-0)*(y-0));
  r2=sqrt((384000-x)*(384000-x)+(y-0)*(y-0));
  mes1=81/(r1*r1);
  mes2=1/(r2*r2);
  if(mes1>mes2)            cout<<"Earth"<<endl;
  else if(mes1==mes2)      cout<<"Equal"<<endl;
  else                     cout<<"Moon"<<endl;

  return 0;
}