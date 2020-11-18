#include <cstdlib>
#include <iostream>

using namespace std;

int a[100][100],i,j,n;

int main(int argc, char *argv[])
{
   cin>>n;
   for(i=0; i<=n-1; i++)
   for(j=0; j<=i; j++)
      cin>>a[i][j];
   
   for(i=n-2; i>=0; i--)
   for(j=0; j<=i; j++)
      a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
   
   cout<<a[0][0]<<endl;
   
   return EXIT_SUCCESS;
}