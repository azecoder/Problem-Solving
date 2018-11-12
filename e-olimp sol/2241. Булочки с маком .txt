#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long b,k,x,y,say=1;
  cin>>k>>b;
  
  x=k*100+k;
  y=b*100+b;
  b=b*100+b;   
  while(1)
  {
      if(y>50000)
      {
          cout<<"NO"<<endl;    break;
      }
      
      if((x+y)%100==0)
      {
          cout<<"YES"<<endl<<say<<endl;    break;
      }
      y+=b;
      say++;
  }
  
 
  return EXIT_SUCCESS;
}