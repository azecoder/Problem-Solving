#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int a, b, i;

int main(int argc, char *argv[])
{
 cin>>a>>b;
 if( a != 1 && b != 1 )
 {
        for( i = 1; i <= b - a + 1; i ++ )  cout << 9;
        for( i = 1; i <= a-1; i++ )         cout << 0;
 }
 else
 {
        cout << 1;
        for( i = 1; i <= b - a + 1; i ++ )  cout << 0;
 }
 cout << endl;
 
 return 0;
}