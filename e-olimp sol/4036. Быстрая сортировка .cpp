#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
#define size 100001
bool ayt(int x, int y)
{
 return x<y;
}
int main(int argc, char *argv[])
{
   int n;
      cin>>n;

   int i,a[size];
      for(i=0; i<n; i++)
          cin>>a[i];
   sort(a,a+n,ayt);

   cout<<a[0];
   for(i=1; i<n; i++)
      cout<<" "<<a[i];

   cout<<endl;


   
   return EXIT_SUCCESS;
}