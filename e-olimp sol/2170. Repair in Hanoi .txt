#include <iostream>
using namespace std;
int mov(int n, int start, int finish)
{
  if (n>0)
  {
      if ((start+finish)==4)
      {
          mov(n,start,2);
          mov(n,2,finish);
      }
      else
      {
          mov(n-1,start,6-start-finish);
          cout << n << " " << start << " "  << finish << endl;
          mov(n-1,6-start-finish,finish);
      }
  }
}
int main()
{
  int n;
  cin>>n;
  mov(n,1,3);
  return 0;
}