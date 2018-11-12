#include <cstdlib>
#include <iostream>

using namespace std;

#define ll long long
#define MAX 10001
int main(int argc, char *argv[])
{
 ll n,a[MAX],i=1,j,k,h,eded=0,p=1;
 cin>>n>>k;

 while(n>=2)
 {
     a[i++]=n%2;
     n=n/2;
 }

 a[i]=n;
 a[k+1]=0;

 for(j=1; j<=i; j++)
 {
     eded=eded+p*a[j];
     p=p*2;
 }

 cout<<eded<<endl;


 return EXIT_SUCCESS;
}