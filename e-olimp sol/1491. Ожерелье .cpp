#include <iostream>

using namespace std;

int main()
{
  int n , k = 1;

  cin>>n;

  if (n < 6) cout<<-1<<endl;
  else {
      for (int i = 0; i < n; i++) {
          if (i == 0 || i == 1)
              cout<<"0";
          else if (i == n - 1 || i == n - 2)
              cout<<"1";
          else {
              if (k) cout<<1;
              else cout<<0;
              k = 1 - k;
          }
          if (i == n - 1) cout<<endl;
          else cout<<" ";
      }
  }

  return 0;
} 