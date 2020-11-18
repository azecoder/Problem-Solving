#include <iostream>

using namespace std;

int n, cnt = 0;
int main()
{
    cin >> n;
    while(n) {
        int m = n, sum = 0;
        while(m > 0) {
            sum += m%10;
            m /= 10;
        }
        n -= sum;
        cnt ++ ;
    }
    cout << cnt << endl;
    return 0;
}
