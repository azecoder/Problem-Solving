#include <iostream.h>

using namespace std;

int a[10000], i, j, k, n, l, t = 1;
int main()
{ 
 cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];

 sort(a+1,a+6);
 if( a[1] == 0 && a[2] == 0 )
      cout<<"Yes"<<endl;
 else if( a[1] == 0 && a[2] == a[3] && a[3] == a[4] && a[4] == a[5] && a[2] != 0 )
      cout<<"No"<<endl;
 else if( (a[1] == 0 && a[2] != 0) && ( a[2] == a[3] || a[3] == a[4] || a[4] == a[5]) )
      cout<<"Yes"<<endl;
 else if( (a[1] != 0) && ( (a[1] == a[2] && a[3] == a[4] && a[1] != a[3]) || ( a[1] == a[2] && a[4] == a[5] && a[1] != a[4]) || ( a[2] == a[3] && a[4] == a[5] && a[3] != a[4])) )
      cout<<"Yes"<<endl;
 else
      cout<<"No"<<endl;
 
 return 0;
}