#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

char a[1001],b[1001];
int n,m;
int main(int argc, char *argv[]) 
{
  cin>>a>>b;

  n=strlen(a);
  m=strlen(b);
  if(n>=m)   cout<<"go"<<endl;
  else       cout<<"no"<<endl;
  
 return 0;
}