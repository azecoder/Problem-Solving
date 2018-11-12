#include <cstdlib>
#include <iostream>

using namespace std;

long long int N, A, B;
int main(int argc, char *argv[])
{
    cin >> N;
    if( N % 5 == 1) {
        A = N / 5 - 1;
        B = 3;
    }
    if( N % 5 == 2 ) {
        A = N / 5;
        B = 1;
    }
    if( N % 5 == 3 ) {
        A = N / 5 - 1;
        B = 4;
    }
    if( N % 5 == 4 ) {
        A = N / 5;
        B = 2;
    }
    if( N % 5 == 0 ) {
        A = N / 5;
        B = 0;
    }
    cout << A + B << endl;


    return 0;
}
