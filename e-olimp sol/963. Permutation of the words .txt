#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
int i, j, n, m, c;
char a[250],b[250];

   cin>>a>>b;

  n=strlen(a);
  m=strlen(b);

  for(i=0; i<m; i++)
      cout<<b[i];
cout<<' ';
  for(i=0; i<n; i++)
      cout<<a[i];
cout<<endl;

   
   return EXIT_SUCCESS;
}