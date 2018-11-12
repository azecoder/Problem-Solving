#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int a[4];
int main(int argc, char *argv[]) {
  cin>>n;
  if(n>0)
  {
     a[1]=n/100;
     a[2]=n/10%10;
     a[3]=n%10;
     sort(a+1,a+4);
     if (a[1]==0 && a[2]==0)  cout<<a[3]<<"00"<<endl;
     else if(a[1]==0)         cout<<a[2]<<"0"<<a[3]<<endl; 
     else                     cout<<a[1]<<a[2]<<a[3]<<endl;
  }
  else if (n<0)
  {
      cout<<"-";
      n=-n;
     a[1]=n/100;
     a[2]=n/10%10;
     a[3]=n%10;
     sort(a+1,a+4);
     if (a[1]==0 && a[2]==0)         cout<<a[3]<<"00"<<endl;
     else if(a[1]==0)                cout<<a[3]<<a[2]<<"0"<<endl;
     else                            cout<<a[3]<<a[2]<<a[1]<<endl;
  }
  return 0;
}