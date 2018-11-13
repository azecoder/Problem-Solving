#include<iostream>

using namespace std;

long long a[10000000];
long mod(long x,long  m) {
  long long r = x%m;
  return r<0 ? r+m : r;
}
long long name(long long n){
  if(a[n]) return a[n];
  a[(n-1)]=name((n-1));
  a[(n-4)]=name((n-4));
  return 2*a[(n-1)]-name((n-4));
}
int main()
{
  long long n;
  cin>>n;
  a[0]=1;
  a[1]=2;
  a[2]=4;
  a[3]=7;
  a[4]=13;
  for(int i=0;i<40000;i++)name(i);
  cout<<name(n)<<endl;
 
   return EXIT_SUCCESS;
} 