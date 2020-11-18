#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;  cin >> n; int sqn = sqrt(n);
    for(int i = 2; i <= sqn; i++) {
        while( !(n%i) ) {
            cout << i;
            n /= i;
            if(n > 1) {
                cout << "*";
            }
        }
    }
    if(n > 1)   cout << n;
    cout << endl;
    return 0;
}