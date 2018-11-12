#include <cstdlib>
#include <iostream>
#include <math.h>

int n,a,b,c,d;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>n;

if(n<0)    n=-n;

a=n/1000;
b=n%1000/100;
c=n%100/10;
d=n%10;

if(a>=b && a>=c && a>=d)
   cout<<a;
else if(b>=a && b>=c && b>=d)
   cout<<b;
else if(c>=b && c>=a && c>=d)
   cout<<c;
else if(d>=b && d>=c && d>=a)
   cout<<d;

cout<<endl;

  return EXIT_SUCCESS;
}