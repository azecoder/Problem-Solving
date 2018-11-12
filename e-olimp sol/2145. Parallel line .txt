#include <iostream>
#include <math.h>
using namespace std;

double A, B, C, R, c1, c2;

int main()
{
 cin >> A >> B >> C >> R;
 double l = R*sqrt(A*A + B*B);

 cout.precision(6);
 cout<<fixed<<A<<" "<<B<<" "<<C - l<<endl;
 cout.precision(6);
 cout<<fixed<<A<<" "<<B<<" "<<C + l<<endl;
 
 return 0;
}