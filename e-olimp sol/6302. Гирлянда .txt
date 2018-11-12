#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long long ebob(unsigned long long a, unsigned long long b)
{
 if(b==0)
 return a;
 else
 return ebob(b,a%b);
}

unsigned long long ekob(unsigned long long a, unsigned long long b)
{
 return a*b/ebob(a,b);
}

int main(int argc, char *argv[])
{
 unsigned long long i,n,a[11];
 cin>>n;
 for(i=1; i<=n; i++)
 cin>>a[i];

 for(i=1; i<n; i++)
 a[i+1]=ekob(a[i],a[i+1]);

 cout<<a[n]<<endl;


 return EXIT_SUCCESS;
}