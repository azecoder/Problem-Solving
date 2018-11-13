#include <cstdlib>
#include <iostream>
#include <stdio.h>

#define size 100
using namespace std;

int sys(int x, int base)
{
int i = 0;
int b[size];

while(x != 0)
    {
       b[i] = x%base;
       i++;
       x /= base;
    }
int l = i;
for(i = l-1; i >= 0; i--){
   if(b[i] < 10)
       cout << b[i];
   else
       cout << char(b[i]+55);
  }
}
int main(int argc, char *argv[])
{
int a,b,c;
 scanf("%d/%d/%d",&a,&b,&c);

   sys(a, a+1);
      cout << "/";
   sys(b, a+1);
      cout << "/";
   sys(c, a+1);
      cout << endl;

 
 return EXIT_SUCCESS;
}