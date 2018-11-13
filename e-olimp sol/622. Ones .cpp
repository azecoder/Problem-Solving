#include <cstdlib>
#include <iostream>

using namespace std;

long n,k,s;


int main(int argc, char *argv[])
{
  cin>>n;



  if(n==0)         cout<<"0"<<endl;
  else if(n==1)    cout<<"1"<<endl;
  else{

          s=0;
          while(1){

          k=n%2;
          if(k==1) { s++; n-=1; }
          n/=2;

          if(n==1) break;
         }
       cout<<s+1<<endl;
      }
  
  return EXIT_SUCCESS;
}