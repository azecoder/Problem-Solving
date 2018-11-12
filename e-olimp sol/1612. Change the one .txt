#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  long i=1,j,k,n,a[100],b[100],eded=0;
  cin >> n;

  while(n >= 2)
  {
      a[i++] = n%2;
      n /= 2;
  }
  b[1] = n, k = 2;
  for(j = i-1; j >= 1; j --) b[k++] = a[j];
  k--;
  for(i = k; i >= 1; i --)
  if(b[i] == 1)
  {
      b[i] = 0; break;
  }

  j=0;
  for(i = k; i >= 1; i --)
  {
      eded += b[i]*pow(2,j); j++;
  }
  cout<<eded<<endl;

  return EXIT_SUCCESS;
}