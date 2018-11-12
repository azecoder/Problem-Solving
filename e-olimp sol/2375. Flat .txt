#include <string>
#include <iostream>
#include <math.h>

using namespace std;

long i, n;
string s[101];
double a[101], cost, res1, res2, res3, res; 
int main(int argc, char *argv[])
{
   cin>>n>>cost;
   for( i = 1; i <= n; i++ ){
        cin>>a[i]>>s[i];
        res1 = res1 + a[i];
        if( s[i] ==  "bedroom" )
            res2 = res2 + a[i];
        if( s[i] == "balcony" )
            res = res + a[i]/2;
        if( s[i] != "balcony" )
            res = res + a[i];
        } 
   res3 = res*cost;
   cout<<res1<<endl;
   cout<<res2<<endl;
   if( (double)res3 == (long)res3 )
       cout<<(long)res3<<endl;
   else
       cout<<(long)res3<<".5"<<endl;
   
   return 0;
}