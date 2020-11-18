#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int m,n,x,y;


int main(int argc, char *argv[])
{

cin>>m>>n>>x>>y;

  if(m==x || n==y)
   cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;

  return EXIT_SUCCESS;
}