#include <iostream>
#include <math.h>
using namespace std;
double p[401];
int i, n;
int main()
{
    p[1] = 1;
    for( i = 2; i < 401; i++ )
         p[i] = p[i-1] * (1 - ((double)i - 1) / 365);
    while(cin>>n){
         cout.precision(8);
         cout<<fixed<<(1 - p[n]) * 100<<"%"<<endl;
                  }
    return 0;
}

