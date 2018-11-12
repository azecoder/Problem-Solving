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

#define size 300

int main(int argc, char *argv[])
{
   int n;
       while(cin >> n && n)
       {
           int a[n];
           for(int i = 1; i <= n; i ++)
               cin >> a[i];
           sort(a+1, a+n+1);
           
           if(n%2)     cout << a[(n+1)/2] << endl;
           else        cout << (double)((a[n/2] + a[(n+2)/2])/2.0) << endl;
       }

   
   return EXIT_SUCCESS;
}