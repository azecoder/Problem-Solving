#include <iostream>
#include <cmath>
using namespace std;
double r, n, t;
int main()
{
   while(cin>>r>>n){
       t = r / sqrt(n*n-1)*2;
       cout.precision(6);
       cout<<fixed<<t<<endl;
   }
   return 0;
}
