#include <iostream>

using namespace std;

int a, b, i = 1, sum = 0;
int main()
{
    cin >> a >> b;
    while(1) {
        sum += a;
        if(b == sum + a)    break;
        a++, i++;
    }
    cout << i;

    return 0;
}