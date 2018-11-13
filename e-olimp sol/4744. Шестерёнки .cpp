#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>


using namespace std;

int gcd(int a,int b)
{
if(b==0) return a;
else return gcd(b,a%b);
}

int main(int argc, char *argv[])
{

 int a,b;
      cin>> a >> b ;

if(a==0) cout<<b;
else if(b==0) cout<<a;
else{

 int i;
      a/=(gcd(a,b));
      a*=b;

 cout<< a ; }
 cout<< endl;


   
   return EXIT_SUCCESS;
}