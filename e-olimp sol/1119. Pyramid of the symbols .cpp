#include <iostream>
#include <string.h>

using namespace std;

char a[51];
int n,i,j,num,k;


int main()
{

cin>>a>>n;

num=(3*n*n-n)/2;
cout<<num<<endl;

for(i=1; i<=n; i++)
 {
   for(j=i; j<=n-1; j++)
      cout<<" ";

   for(k=1; k<=2*i-1; k++)
      cout<<a;

   cout<<"\n";
 }

   
   return EXIT_SUCCESS;
}