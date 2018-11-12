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


int main(int argc, char *argv[])
{
   string s;   cin >> s;
   int sum = 0;
   int s1 = 0, s2 = 0;
   for(int i = 0; i < s.length(); i++)
   {
       if(s[i] == '(') s1 ++;
       if(s[i] == ')') s2 ++;

       if(s1 > s2) { s1 -= s2; s2 = 0; }
       if(s1 == s2) {  s1 = 0; s2 = 0;  }
       if(s2 > s1) {
           sum += (s2 - s1);
           s2 = 0;
       }
   }
   cout << sum + abs(s1 - s2) << endl;

   return EXIT_SUCCESS;
} 