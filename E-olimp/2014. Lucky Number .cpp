#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
  long i,a,b,cem1=0,cem2=0;
  char x[7],y[7],z;

  cin>>a>>z>>b;
  
  if(a<0)
      a=-a;
  
  itoa(a,x,10);
  itoa(b,y,10);

  for(i=0; i<strlen(x); i++)
      cem1 += (x[i]-48);

  for(i=0; i<strlen(y); i++)
      cem2 += (y[i]-48);

  if(cem1==cem2)    cout<<"Yes"<<endl;
  else                cout<<"No"<<endl;


  return 0;
}