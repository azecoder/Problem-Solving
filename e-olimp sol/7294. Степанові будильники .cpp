#include <iostream>
#include <stdio.h>

using namespace std;
#define LL long long

LL gcd(LL a, LL b){
 while(b != 0){
     a %= b;
     swap(a, b);
 }
 return a;
}

LL a, b, n;
int main()
{
 cin >> a >> b;
 cout << a*b/gcd(a,b) << endl;

 return 0;
} 