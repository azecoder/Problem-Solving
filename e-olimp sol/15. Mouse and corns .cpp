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
long l,h;
char b[size];

   long n, m;
       cin >> n >> m;

   long i, j, a[size][size];
    for(i = 0; i < n; i++)
         for(j = 0; j < m; j++)
            cin >> a[i][j];
   
   for(i = n-2; i >= 0; i--)    a[i][0] += a[i+1][0];
   for(i = 1; i < m; i++)        a[n-1][i] += a[n-1][i-1];
    for(i = n-2; i >= 0; i--)
        for(j = 1;j < m; j++)
        {
            if(a[i][j-1]>a[i+1][j])        a[i][j] += a[i][j-1];
            else                        a[i][j] += a[i+1][j];
        }

   j = m - 1;
   i = l = 0;
   while(1)
   {
       if((a[i][j-1] > a[i+1][j]) && i < (n-1) && (j > 0))
       {
           b[l++] = 'R';
             j--;
       }
       else 
       {
           if((i < n-1) && (j > 0))
           {
                 b[l++] = 'F';
                 i++;
             }
       }
       if((i < n-1) && (j <= 0))
       {
           b[l++] = 'F';
           i++;
       }
       if((i >= n-1) && (j > 0))
       {
           b[l++] = 'R';
           j--;
       }
       if((i >= n-1) && (j <= 0))  break;
   }
   for(i = l-1; i > 0; i--)    
       cout << b[i];
   cout << b[0] << endl;

   return EXIT_SUCCESS;
}