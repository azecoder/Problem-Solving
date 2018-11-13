#include <cstdlib>
#include <iostream>

int a,b,c;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>a>>b>>c;

if (a<b && a<c)
    cout<<a<<endl;
else if (b<a && b<c)
    cout<<b<<endl;
else if (c<a && c<b)
    cout<<c<<endl;

   
   return EXIT_SUCCESS;
}