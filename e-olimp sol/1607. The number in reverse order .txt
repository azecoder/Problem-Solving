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

if(a[0]=='-')    { k=1;  cout<<"-"; }
else               k=0;

for(i=n-1; i>=k; i--)
   cout<<a[i];


 cout<<endl;


 
 return EXIT_SUCCESS;
}