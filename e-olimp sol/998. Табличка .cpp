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

int dis(int x1, int y1, int x2, int y2)
{
   return abs(x2-x1) + abs(y2-y1);
}

int main(int argc, char *argv[])
{
   int n, m;
       cin >> n >> m;
   int array[size][size];
       for(int i = 0; i < n; i++)
           for(int j = 0; j < m; j++)
               cin >> array[i][j];
   int b[size][size];
       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < m; j++)
           {
               int mes = 10001;
               if(array[i][j] == 1)    b[i][j] = 0;
               else
               {
                   for(int ii = 0; ii < n; ii++)
                   {
                       for(int jj = 0; jj < m; jj++)
                       {
                           if(array[ii][jj] == 1)
                           {
                       //    cout << dis(i, j, ii, jj) << "\n\n";
                               if(dis(i, j, ii, jj) < mes)
                                   mes = dis(i, j, ii, jj);
                           }
                       }
                   }
                   b[i][j] = mes;               
               }
           }
       }
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < m; j++)
       {
           cout << b[i][j];
           if(j != m-1)    cout << " ";
       }
       cout << endl;
   }
   
   return EXIT_SUCCESS;
}