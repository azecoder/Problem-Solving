#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

long n;

int main(int argc, char *argv[])
{  
  cin >> n;  
  cout << n-(long int)sqrt(n)*(long int)sqrt(n) << endl;
  
  return 0;
}