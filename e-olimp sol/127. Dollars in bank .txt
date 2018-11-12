#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char *argv[])
{
long long s,n,sum=0,d=0;

cin>>s;
n=0;
sum=0;
while(sum<s)
{n++;
d=d*2+n;
sum+=d;
}

cout<<n<<"\n";


  return EXIT_SUCCESS;
}