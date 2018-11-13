#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
  char s[11],m[11];
  int n,l;
       cin>>s;
       l = strlen (s);
       int i;
       do
       {i++;
         
           if(i==n)
                  break;
           else
               cout << s << endl;
       }while(next_permutation(s,s+l));
  
   
   return EXIT_SUCCESS;
}