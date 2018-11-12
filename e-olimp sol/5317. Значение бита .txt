#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 long long n,a[1001],i=1,j,k,h,eded=0,p=1,b[1001],uzun=1;
 cin>>n>>k;


 while(n>=2)
 {
     a[i++]=n%2;
     n=n/2;
 }

 a[i]=n;

 for(j=i; j>=1; j--)
 b[uzun++]=a[j];

 uzun--;

  if(k>=uzun)
  cout<<"0"<<endl;
  else
  cout<<b[uzun-k]<<endl;

  
  return EXIT_SUCCESS;
}