#include <cstdlib>
#include <iostream>

using namespace std;
long long n,k,ans;
int main(int argc, char *argv[])
{
 scanf("%lld%lld",&n,&k);
 ans=(n | (1<<k));
 printf("%lld\n",ans);
 return EXIT_SUCCESS;
}