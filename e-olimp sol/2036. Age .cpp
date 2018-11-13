#include <cstdlib>
#include <iostream>

using namespace std;

#define size 10001

int main(int argc, char *argv[])
{
   char a[size]; gets(a);
   int n, x; n=strlen(a);
   
   x = (a[n-1]-48)+(a[n-2]-48)*10;
   
   if(x == 11 || x == 12 || x == 13 || x == 14 || x == 95) cout << x << " rokiv" << endl;
   else
   {
       if(a[n-1]-48 == 1) cout << a << " rik" << endl;
       else if(a[n-1]-48 == 2 || a[n-1]-48 == 3 || a[n-1]-48 == 4) cout << a << " roki" << endl;
       else cout << a << " rokiv" << endl;
   }

  return EXIT_SUCCESS;
}