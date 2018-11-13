#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,n,a[100001];
  cin>>n;
  for(i=0; i<n; i++)
     cin>>a[i];

  next_permutation(a,a+n);

  for(i=0; i<n-1; i++)   cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;


  return EXIT_SUCCESS;
}