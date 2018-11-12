#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
long long factor(long long n)
{
 long long i, temp, c = 0, res = 0, nn = n;
 if (n == 1) return 2;
 for(i = 2; i <= sqrt(1.0*n); i++){
   if(n % i == 0){
     temp = 1;
     while(n % i == 0){
        temp *= i;
        n /= i;
}
   res += temp; c++;
}
 }
 if (n > 1) res += n, c++;
 if (n == nn) res++;
 else if (c == 1) res++;
 return res;
}
long long n, res, i;
int main(int argc, char *argv[])
{
   while(cin>>n){
       if( n == 0 )
           break;
       i++;
       res = factor(n);
       cout<<"Case "<<i<<": "<<res<<endl;
}
   return EXIT_SUCCESS;
}
