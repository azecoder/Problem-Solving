#include <cstdlib>
#include <iostream>
#include <math.h>

int A,B,C;

using namespace std;

int main(int argc, char *argv[])
{
   cin>>A>>B>>C;
 if (abs(A)%2==0 && abs(B)%2==0 && abs(C)%2==0)
     cout<<"NO"<<endl;
 else if (abs(A)%2!=0 && abs(B)%2!=0 && abs(C)%2!=0)
     cout<<"NO"<<endl;
 else
     cout<<"YES"<<endl;

   return EXIT_SUCCESS;
}