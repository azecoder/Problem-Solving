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
int MAX = -101;
int a[size];

int main(int argc, char *argv[])
{
   int n;
       cin >> n;
   int x;
       while(n--)
       {
           cin >> x;
           a[x]++;
           if(a[x] > MAX) MAX = a[x];
       }
   for(int i = 0; i < 10000; i++)
       if(a[i] == MAX)
       {
           cout << i << endl; break;
       }
   
   
 
 return EXIT_SUCCESS;
}