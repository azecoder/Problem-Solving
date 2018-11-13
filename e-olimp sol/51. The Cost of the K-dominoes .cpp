#include <iostream>

using namespace std;

long s, n, t;

int main(int argc, char *argv[])
{
   cin >> s;
   while( t < s )
   {
      n ++;
      t += n;
   }
   cout << n << endl;
 
  return 0;
} 