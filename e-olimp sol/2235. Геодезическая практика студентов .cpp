#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    long double x1, y1, x2, y2, x3, y3, x4, y4;
    double k1, k2, b1, b2, x, y;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    cout.setf(ios::fixed);
    cout.precision(5);
    if( x1 != x2 && x3 != x4)
    {
        k1 = (y1 - y2)/(x1 - x2);
        k2 = (y3 - y4)/(x3 - x4);
        b1 = (x1*y2 - y1*x2)/(x1 - x2);
        b2 = (x3*y4 - y3*x4)/(x3 - x4);
        if( k1 == k2)
            cout<<"No intersection"<<endl;
        else
        {
            x = (b2 - b1)/(k1 - k2);
            y = k1*((b2 - b1)/(k1 - k2)) + b1;
            cout<<x<<" "<<y<<endl;
        }
    }
    else if( x1 == x2 && x3 != x4)
    {
        k2 = (y3 - y4)/(x3 - x4);
        b2 = (x3*y4 - y3*x4)/(x3 - x4);
        y = k2*x1 + b2;
        x = x1;

        cout<<x<<" "<<y<<endl;
    }
    else if( x1 != x2 && x3 == x4)
    {
        k1 = (y1 - y2)/(x1 - x2);
        b1 = (x1*y2 - y1*x2)/(x1 - x2);
        y = k1*x3 + b1;
        x = x3;

        cout<<x<<" "<<y<<endl;
    }
    else
        cout<<"No intersection"<<endl;

    return 0;
}
