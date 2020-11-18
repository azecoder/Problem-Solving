#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long n;
    cin>>n;

  long i,sum;
     sum=1;
     for(i=1; i<=n; i++)
        {
           sum*=2;
        }
  cout<<sum-1<<endl;

  
  return EXIT_SUCCESS;
}