#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,n,deq,pul=64,cem=0;
  cin>>n;

  deq=n/60;

  if(n%60!=0)
  deq++;

  for(i=1; i<=deq; i++)
  {
      cem+=pul;

      if((pul/2)>=1)
      pul/=2;
  }

  cout<<cem+1<<endl;


  return EXIT_SUCCESS;
}