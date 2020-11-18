#include <cstdlib>
#include <iostream>
#include <set>
#include <cctype>
using namespace std;
#define TOLOWER(x) (x<='Z'?x+32:x)
set < string > s;
char line[256],world[256];
int main(void)
{
   s.clear();
   while(fgets(line, 256, stdin))
        {
           register char *c=line,*w;
           while(true)
                {
                   w=world;
                   while(*c && !isalpha(*c)) c++;
                   if(!*c)  break;
                   while(*c && isalpha(*c))
                        *w++=TOLOWER(*c), c++;
                   *w=0;
                   s.insert(string(world));
                }
        }
   set < string > :: iterator st;
   for(st=s.begin(); st!=s.end(); st++)
      puts((*st).c_str());

   
   return EXIT_SUCCESS;
}