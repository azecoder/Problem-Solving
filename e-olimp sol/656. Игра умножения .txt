#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char *argv[])
{
 long long n,k=0;
 cin>>n;

 while(n!=1)
 {       
      n=ceil((double)n/9);
      if(n>=1 && n<9)    k=1;
      if(n==1)break;
      n=ceil((double)n/2);
      if(n>=1 && n<9){k=2;}
 }

  if(k==1)       cout<<"Stan wins.\n";
  if(k==2)       cout<<"Ollie wins.\n";
 
 return 0;
}