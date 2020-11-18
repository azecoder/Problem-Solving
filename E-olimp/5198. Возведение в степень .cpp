#include <cstdlib>
#include <iostream>

using namespace std;

#define ull unsigned long long

ull m;

ull ust(ull a, ull b)
{
    if(b == 1)
             return (a % m);
   if(b%2 == 0)
            return ust(((a % m) * (a % m)) % m, b / 2) % m;
    else
            return ((a % m) * ust(((a % m) * (a % m)) % m, b / 2)) % m;
}

int main()
{
   
   ull a,b;
       cin >> a >> b >> m;

       cout << (ust(a,b) % m) << endl;


 return EXIT_SUCCESS;
}