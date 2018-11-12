#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
   long n;
   cin>>n;
       if(n==1)
       cout<<"0.000"<<" "<<"0.866\n";
   else{
   cout.setf(ios::fixed,ios::floatfield);
   cout.precision(3);

   cout<<(double)n*n-n<<" "<<((2*n-1)*sqrt(3))/2<<endl;
}
   
   return EXIT_SUCCESS;
} 