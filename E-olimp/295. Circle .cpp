#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{long int c,i,j,r,k,l,m;

scanf("%ld",&r);
l=4*r+1;
k=0;
m=r*r;
for(i=1;i<r;i++)
{for(j=1;j<r;j++)
if(i*i+j*j<=m)
{k++;
}
else
continue;
}
c=l+4*k;
printf("%ld\n",c);

  return EXIT_SUCCESS;
}