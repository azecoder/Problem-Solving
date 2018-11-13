#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

char a[1001];
int k,b,n,i,s,cvb;

int main(int argc, char *argv[])
{
   cin>>a;

 n=strlen(a);

k=n-1;
for(i=0; i<n; i++)
  {
   b=a[i]-48;
   s=pow(2,k);
   cvb+=b*s;
   k--;
  }
   cout<<cvb<<endl;

   
   return EXIT_SUCCESS;
}