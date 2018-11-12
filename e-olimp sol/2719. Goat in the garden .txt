#include <cmath>
#include <iostream>

#define pi acos(-1)

using namespace std;

double Area, l, rope, d, alfa, A1, A2;

int main(int argc, char *argv[])
{
  cout.precision(6);
  cin >> l >> rope;
  d = l * sqrt(2) / 2;
  if( rope >= d )
      Area = l*l;
  else{
       if( rope <= l/2 )
           Area = pi*rope*rope;
       if( rope > l/2 && rope < d ){
           A1 = 2*sqrt(rope*rope - l*l/4)*l;
           alfa = asin(sqrt(rope*rope - l*l/4)/rope);
           A2 = 2*rope*rope*((pi/2 - 2*alfa));
           Area = A1 + A2;
           }      
       }
  cout << fixed << Area << endl;
 
  return 0;
} 