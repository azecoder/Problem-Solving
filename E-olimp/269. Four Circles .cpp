#include <iostream>
#include <cmath>

using namespace std;

double r1, r2, r3, r;

int main()
{
  cin >> r1 >> r2 >> r3;
  r = (r1 * r2 * r3) / (r1 * r2 + r2 * r3 + r1 * r3 + (2 * sqrt(r1 * r2 * r3*(r1 + r2 + r3))));
  cout.precision(4);
  cout << fixed << r << endl;  
 
  return 0;
} 