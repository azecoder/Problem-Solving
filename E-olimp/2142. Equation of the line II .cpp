#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int x,y,m,n,A,B,C;
  cin >> x >> y >> m >> n;
  
  A = m, B = n, C = -m * x - n * y;  
  cout << A << " " << B << " " << C << endl;
  
 
  return EXIT_SUCCESS;
}