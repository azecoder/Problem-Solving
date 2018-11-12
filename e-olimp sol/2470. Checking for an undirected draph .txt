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

#define size 101

int main(int argc, char *argv[])
{
   int n;
       cin >> n;
   int array[size][size];
       for(int i = 0; i < n; i++)
           for(int j = 0; j < n; j++)
               cin >> array[i][j];
   int cnt = 0;
       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < n; j++)
           {
               if(array[i][j] == 1)    cnt ++;
           }
       }
   if(cnt % 2)     cout << "NO" << endl;
   else            cout << "YES" << endl;
   
   
   return EXIT_SUCCESS;
}