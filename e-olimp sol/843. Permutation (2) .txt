#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <set>
#include <map>

using namespace std;

map <const int,char> myMap;
map <const int,char> :: iterator it;

int main(int argc, char *argv[])
{
   char s[100];
     int n,l;
          cin>>s;
          l = strlen (s);
          sort(s,s+l);
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