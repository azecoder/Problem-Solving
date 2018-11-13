#include <iostream>

using namespace std;

int i,n,x,a[101],say;

int main()
{
  cin>>n;
  for(i=0; i<n; i++)
  {
      cin>>x;    a[x]++;
  }

  for(i=0; i<=100; i++)    if(a[i]>0)    say++;

  if(say==1) say--;
  cout<<say<<endl;

  return 0;
}