#include <iostream>
#include <math.h>


using namespace std;
 unsigned long long n,i,a,cem = 0;

int main()
{
 cin >> n >> a;

 if(a==1)    cout << n*(n+1)/2 << endl;
 else
 {
        for(i = 1; i <= n; i ++)     cem += i*pow(a,i);
        cout << cem << endl;
 }

 return EXIT_SUCCESS;
}