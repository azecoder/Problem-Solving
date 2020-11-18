#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
unsigned int a,cem=0,yoxla1;
double yoxla2;
cin>>a;

while(a!=0)
{
   cem=cem+a%10;
   a=a/10;
}

yoxla1=sqrt(cem);
yoxla2=sqrt(cem);

if(yoxla1==yoxla2)   cout<<"Yes"<<endl;
else   cout<<"No"<<endl;



return EXIT_SUCCESS;
}