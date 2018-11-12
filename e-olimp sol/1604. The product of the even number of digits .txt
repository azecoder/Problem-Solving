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

if(a[0]=='-')    k=1;
else             k=0;

for(i=k; i<n; i++)
   {
     if((a[i]-48)%2==0)
         pro*=(a[i]-48);
   }

 if(pro==1)
    cout<<"-1"<<endl;
 else
    cout<<pro<<endl;


 
 return EXIT_SUCCESS;
}