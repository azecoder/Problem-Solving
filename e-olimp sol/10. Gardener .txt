#include <iostream>
#include <math.h>

using namespace std;

double N, n;
int k;
double d, sum;
int main()
{
   cin>>N;
   n = N;
   while( sum <= 0.5 ){
   d = 1 / N;
   sum = sum + d;
   N = N - 1;
   k ++;
}
   cout<<n - k + 1<<endl;  
   
   return 0;
}