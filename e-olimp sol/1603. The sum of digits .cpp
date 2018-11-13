#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 100000001
char a[massiv];
long long n,i,sum,k;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a;

 n=strlen(a);

if(a[0]=='-')    k=1;
else             k=0;

for(i=k; i<n; i++)
   {
     sum+=(a[i]-48);
   }


 cout<<sum<<endl;


 
 return EXIT_SUCCESS;
}