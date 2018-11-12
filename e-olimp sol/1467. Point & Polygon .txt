#include <iostream.h>

using namespace std;

long long  x[1001], y[1001], i, n, s, p1, p2, S, k, s1;
int main()
{   
  while(cin>>n)
  {
     if( n == 0)    break;
     s = S = s1 = k = 0;
     for( i = 1; i <= n; i++ )
        cin>>x[i]>>y[i];
     cin>>p1>>p2;
     for( i = 1; i < n; i++ )
        s = s + (x[i]*y[i+1] - x[i+1]*y[i]);
     s = s + (x[n]*y[1] - x[1]*y[n]);
     s = abs(s);
     for( i = 1; i < n; i++ )
     {
        s1 = abs(p1*(y[i] - y[i+1]) + x[i]*(y[i+1] - p2) + x[i+1]*(p2 - y[i]));
        S = S + s1;
        if( s1 == 0 )    k = 1;
     }
     s1 = abs(p1*(y[1] - y[n]) + x[1]*(y[n] - p2) + x[n]*(p2 - y[1]));
        if( s1 == 0 )    k = 1;
     S += s1;
     if( k == 1 && S == s )
        cout<<"ON BORDER"<<endl;
     else if( S == s && k != 1 )
        cout<<"INSIDE"<<endl;
     else
        cout<<"OUTSIDE"<<endl;
  }

 return EXIT_SUCCESS;
}