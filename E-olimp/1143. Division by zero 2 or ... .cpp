#include <cstdlib>
#include <iostream>

double a, b;
long c;

using namespace std;

int main(int argc, char *argv[])
{

   cin>>a>>b;

 c=a/b;

 if(b==0 || c!=a/b)
    cout<<"ERROR"<<endl;

 else if(b!=0)
    {
      c=long(a/b);
      cout<<c<<endl;
    }



   
   return EXIT_SUCCESS;
}