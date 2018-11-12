#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
  char a[100];
  int n;
    gets(a);
    n=strlen(a);
  int i;
    cout<<"Hello, ";
  for(i=0; i<n; i++)
    cout<<(char)a[i];
  cout<<endl;

  
  return EXIT_SUCCESS;
}