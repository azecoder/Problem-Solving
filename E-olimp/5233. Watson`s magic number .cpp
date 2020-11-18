#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  int a[4][4];
  
  for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
              cin >> a[i][j];
  
  int DW = (a[1][1]*a[2][2]*a[3][3]+a[1][2]*a[2][3]*a[3][1]+a[1][3]*a[2][1]*a[3][2])-(a[1][2]*a[2][1]*a[3][3]+a[1][1]*a[2][3]*a[3][2]+a[1][3]*a[2][2]*a[3][1]);

  cout << DW << endl;
  
   
return 0;
}