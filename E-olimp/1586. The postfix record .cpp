#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int main(int argc, char *argv[])
{
  stack <long long int> s;
  string a;
  long long i,x,y;

  getline(cin,a);

  for(i=0; i<a.size(); i++)
  if(a[i]==' ')
  continue;
  else
  {
      if(a[i]>=48 && a[i]<=57)
      s.push(a[i]-48);
      else
      {
          if(a[i]=='+')
          {
              x=s.top();
              s.pop();
              y=s.top();
              s.pop();

              s.push(x+y);
          }
          else if(a[i]=='-')
          {
              x=s.top();
              s.pop();
              y=s.top();
              s.pop();

              s.push(y-x);
          }
          else if(a[i]=='*')
          {
              x=s.top();
              s.pop();
              y=s.top();
              s.pop();

              s.push(x*y);
          }
      }
  }

  cout<<s.top()<<endl;

  
  return EXIT_SUCCESS;
}