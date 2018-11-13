#include <cstdlib>
#include <iostream>

using namespace std;
long long n,m,i,j,h,k;
double l;
int main(int argc, char *argv[])
{cin>>n;
k=0; j=0; m=1; l=1; i=1;
while(int(l)!=n){
  if(i==100000000){
      j=1;
      break;
  }
      
  l*=2;
  if(int(l)>n)
      l/=10;
  k++;
  
}
cout<<k<<endl;
  
 return EXIT_SUCCESS;
}