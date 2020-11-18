#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

#define size 201

int main(int argc, char *argv[])
{
   string s;
       cin >> s;
   int l = s.length();
  
   bool flag1 = false;
   for( int i = 0; i < l-1; i++ )
   {
       if( s[i] != s[i+1] ){ flag1 = true; break; }
   }
   if( flag1 == false )   cout << "NO SOLUTION" << endl;
   else 
   {
       bool flag2 = false;
       for( int i = 0; i < l/2; i++ )
           if( s[i] != s[l-1-i])
           {
               flag2 = true;
               break;
           }
       if( flag2 )    cout << s << endl;
       else
           for( int i = 0; i < l-1; i++ )
           {
                if( s[i] > s[i+1] )
                {
                     for( int j = 1; j < l-1; j++ )     cout << s[j];
                     cout << s[l-1] << endl;
                     break;
                }
               if( s[i] < s[i+1] )
               {
                   for( int j = 0; j < l-2; j++ )     cout << s[j];
                   cout << s[l-2] << endl;
                   break;
               }    
           }
   }


   
   return EXIT_SUCCESS;
}