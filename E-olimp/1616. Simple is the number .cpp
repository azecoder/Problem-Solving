#include <cstdlib>
#include <iostream>
#include <math.h>

long long n,m;
long long i, k;
using namespace std;

int main(int argc, char *argv[])
{
 cin>>n;

m=n;
k=0;
for(i=2; i<=sqrt(n); i++)
   if(m%i==0)
     { k=1; break; }

if(k==1)
   cout<<"No";
else
   cout<<"Yes";

cout<<endl;


return EXIT_SUCCESS;
}