#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 100000001
char a[massiv];
long long b,n,i,say,k;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a>>b;

 n=strlen(a);

if(a[0]=='-')      k=1;
else               k=0;

for(i=k; i<n; i++)
   if(b==(a[i]-48))
      say++;


 cout<<say<<endl;



 
 return EXIT_SUCCESS;
}