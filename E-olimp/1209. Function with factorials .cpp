#include <cstdlib>
#include <iostream>

using namespace std;
long n;
int main(int argc, char *argv[])
{
   double s=1;
   cin>>n;
   if(n==2)
       cout<<"1.0000\n";
   else{
       for(int i=3;i<=n-3;i+=2)
           s*=(double)(i)/(i-1);

           s=(double)s/(n-2);
       cout.setf(ios::fixed,ios::floatfield);
       cout.precision(4);
       cout<<s<<endl;
   }
   
   return EXIT_SUCCESS;
} 