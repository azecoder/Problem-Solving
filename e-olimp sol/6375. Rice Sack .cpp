#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int cases;
       cin >> cases;
       
       int i = 1;
       while (i <= cases)
       {
           int a,b;
               cin >> a >> b;
               a = max(a,b);
               for(int j = 2; j < 5; j++)
               {
                   cin >> b;
                   a = max(a,b);
               }
           cout << "Case #" << i << ": " << a << endl;
           
       i++;
       }

   
   return EXIT_SUCCESS;
}