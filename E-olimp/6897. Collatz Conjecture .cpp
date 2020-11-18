#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int n;
       while(cin >> n && n)
       {
           int cnt = 1;
           int m = n;
           while(m != 1)
           {
               if(m%2)
               {
                   m *= 3;
                   m ++;
                   cnt++;
               }
               else
               {
                   m /= 2;
                   cnt++;
               }
           }
               cout << cnt << endl;
       }

   return EXIT_SUCCESS;
}