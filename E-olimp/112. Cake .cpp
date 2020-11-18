#include <iostream>
#include <cstdio>

using namespace std;

double a, b, c;
int main()
{
    cin >> a >> b >> c;
    printf("%.2lf\n", 1.0/((1/a)+(1/b)+(1/c)));
    return 0;
}
