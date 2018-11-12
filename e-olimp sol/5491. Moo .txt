#include <iostream>
using namespace std;
int main()
{
 string a="moo",ans="moo",b="moo";
 int n,i,j;
 cin>>n;
 for (i=1; ans.length()<10000000; i++)
 {
     ans+=b;
     for (j=0; j<i; j++)
         ans+="o";
     ans+=a;
     a=ans;
 }
 if (n>ans.length())
 {
     if (n%2)
  cout << "m" << endl;
  else
  cout << "o" << endl;
 }
 else
 cout << ans[n-1] << endl;
 return 0;
}