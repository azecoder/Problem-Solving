#include <iostream>
#include <cmath>

using namespace std;

long double k, D;
unsigned long long n, res, l;
int main()
{
 while(cin>>n){
      D = sqrt(1.000 + 8.000*(long double)n);
      k = D/2 - 0.500;
      if( (unsigned long long )k - k == 0 )
          res = (unsigned long long )k;
      else
          res = (unsigned long long )k + 1;
      l = n - res*(res-1)/2;
      if( res % 2 == 0 )
          cout<<res - l + 1<<"/"<<l<<endl;
      else
          cout<<l<<"/"<<res - l + 1<<endl;
     }
  return 0;
}
