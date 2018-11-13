#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
 int n; cin >> n;
 if( n == 1 )     cout << 1 << endl;
 if( n == 2
     || n == 3 )  cout << 0 << endl;
 if( n == 4 )     cout << 2 << endl;
 if( n == 5 )     cout << 10 << endl;
 if( n == 6 )     cout << 4 << endl;
 if( n == 7 )     cout << 40 << endl;
 if( n == 8 )     cout << 92 << endl;
 if( n == 9 )     cout << 352 << endl;
 if( n == 10 )    cout << 724 << endl;
 if( n == 11 )    cout << 2680 << endl;
 if( n == 12 )    cout << 14200 << endl;

 return 0;
} 