#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
   long n,m,k;
   cin>>n>>m>>k;
   cout.setf(ios::fixed);
   cout.precision(0);
   cout<<ceil((double)n/k)*ceil((double)m/k)<<endl;
 
   return EXIT_SUCCESS;
} 