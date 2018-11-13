#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
double parca(double X1, double Y1, double X2, double Y2)
{
 return sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
}
double X1,Y1,X2,Y2,X3,Y3,X4,Y4;
int main(int argc, char *argv[])
{
   cin>>X1>>Y1>>X2>>Y2>>X3>>Y3>>X4>>Y4;
   cout.setf(ios::fixed);
   cout.precision(3);
   cout<<(X1+X3)/2<<" "<<(Y1+Y3)/2<<endl;
   cout.setf(ios::fixed);
   cout.precision(3);
   cout<<parca(X1,Y1,X3,Y3)<<" "<<parca(X2,Y2,X4,Y4)<<endl;
   
   return EXIT_SUCCESS;
}