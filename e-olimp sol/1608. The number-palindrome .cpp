#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 100000001
char a[massiv];
long long n,i,say,k;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a;

 n=strlen(a);

if(n%2)  k=(n+1)/2;
else     k=n/2;

for(i=0; i<k; i++)
   if(a[0+i]!=a[n-1-i])
     say++;

if(say==0)     cout<<"Yes";
else           cout<<"No";

 cout<<endl;


 
 return EXIT_SUCCESS;
}