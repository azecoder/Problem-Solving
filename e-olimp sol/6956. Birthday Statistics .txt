#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

char ch1,ch2;
int n,i,j,id,k,l,g,a,il,say[15];
int main(int argc, char *argv[]) 
{
  cin>>n;
  for(i=1;i<=n;i++)
  {
     cin>>id>>g>>ch1>>a>>ch2>>il;
     say[a]++;
  }
  for(i=1;i<=12;i++)   cout<<i<<" "<<say[i]<<endl;

 return 0;
}