#include <cstdlib>
#include <iostream>

using namespace std;
long u(long x);
long v(long y);

int main(int argc, char *argv[])
{long n;
while(scanf("%ld",&n)==1)
{if(n==-1)
{break;
}
cout<<u(n)<<endl;
}

  return EXIT_SUCCESS;
}
long u(long x)
{if(x==0)
return 1;
if(x==1)
return 0;

return 2*v(x-1)+u(x-2);
}
long v(long y)
{if(y==1)
return 1;
if(y==0)
return 0;

return u(y-1)+v(y-2);
}