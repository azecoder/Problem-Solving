#include <iostream>

using namespace std;

int gcd (int a, int b){
  while(b!=0){
      a%=b;
      swap(a,b);
  }
  return a;
}

int a[10001],b[10001],i,n,sum=0;
int main()
{
  cin>>n;
  for(i=1; i<=n; i++){
      cin>>a[i];
      b[i]=a[i];
  }

  for(i=1; i<n; i++)   b[i+1]=gcd(b[i],b[i+1]);
  for(i=1; i<=n; i++)  sum += a[i]/b[n];

  cout << sum << endl;


  return 0;
} 