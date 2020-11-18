#include <iostream>

using namespace std;

#define ull unsigned long long

int main(int argc, char *argv[])
{
  ull n;
     cin >> n;
  
  ull sum = 0;
     while(n > 0)
     {
         n /= 5;
         sum += n;
     }
  
  cout << sum << endl;
 
  return EXIT_SUCCESS;
}