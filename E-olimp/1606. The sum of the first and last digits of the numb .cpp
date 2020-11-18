#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 100000001
char a[massiv];
long long n,i,pro=1,k;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a;

 n=strlen(a);

if(a[0]=='-')
  {
    k=1;       cout<<a[1]+a[n-1]-96;
  }
else
  {
    k=0;       cout<<a[0]+a[n-1]-96;
  }
 cout<<endl;


 
 return EXIT_SUCCESS;
}