#include <cstdlib>
#include <iostream>
#include <map>
#define MAX 10000
#include <math.h>
using namespace std;
map<long long, long long> m;
void primes()
{
  long long i,j;
   for(i=0;i<MAX;i++) m[i] = 1;
   for(i=2;i<=(int)sqrt(MAX);i++)
   if (m[i])
       for(j=i;j*i<MAX;j++) m[i*j] = 0;
}
long long n,sum=1,l,h;
int main(int argc, char *argv[])
{

   cin>>n;
   primes();

       for(int i=2;i<10000;i++){
           l=0;
           if(m[i] && n%i==0){
               while(n%i==0){
                   n/=i;
                   l++;
               }
           //    cout<<i<<" "<<l<<endl;
               h=1;
               for(int j=0;j<l+1;j++)
                   h*=i;
           //    cout<<h<<endl;
           sum*=(h-1)/(i-1);}
           if(n==1)
               break;
       }
   cout<<sum<<endl;


   return EXIT_SUCCESS;
} 