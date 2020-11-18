#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 10001
char a[massiv];
long n,i,j,c,k,l,m;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a;
   cin>>i>>j;

 n=strlen(a);


 for(k=0; k<i-1; k++)
    cout<<(char)(a[k]);

 for(l=j-1; l>=i-1; l--)
    cout<<(char)(a[l]);

 for(m=j; m<n; m++)
    cout<<(char)(a[m]);

 cout<<endl;


 
 return EXIT_SUCCESS;
}