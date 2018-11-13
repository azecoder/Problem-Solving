#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
  int a[100001],b=1,n;
  while(cin>>n){
                if(n==0)
                break;
                else{
                     if(n%2!=0)     cout<<b<<". "<<"odd "<<n/2<<endl;      
                     else           cout<<b<<". "<<"even "<<n/2<<endl;
                     b++;
                     }
                
                }
  
  
         return EXIT_SUCCESS;
}