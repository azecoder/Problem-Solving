#include <cstdlib>
#include <iostream>

using namespace std;
long min(long a,long b){
 if(a>b)
     return b;
 return a;
}
long f(long n,long k){
 if(n==1 || n==0)
     return 0;
 if(k==2){
     if(n%k==0)
         return min(f(n/2,2),f(n/2,3))+2;
     if(n%k==1)
         return min(f((n-1)/2,2),f((n-1)/2,3))+3;
 }
 if(k==3){
     if(n%k==0)
         return min(f(n/3,2),f(n/3,3))+3;
     if(n%k==1)
           return min(f(n/3,2),f(n/3,3))+4;
     if(n%k==2)
               return min(f(n/3,2),f(n/3,3))+5;
 }
}
long a[100],i,j,k,l,m,n;
int main(int argc, char *argv[])
{cin>>n;
cout<<min(f(n,2),f(n,3))<<endl;

 return EXIT_SUCCESS;
}