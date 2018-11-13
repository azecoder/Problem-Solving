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
int MAX = -201;

int a[size][size] = {0};
void dfs(int x, int y, int q, int w)
{
 if(x < q)
         if(y < w)       for(int i = 1; i <= w-y; i++)  a[x+i][y+i]++;
         else            for(int i = 1; i <= y-w; i++)  a[x+i][y-i]++;
 if(x > q)
         if(y < w)       for(int i = 1; i <= w-y; i++)  a[x-i][y+i]++;
         else            for(int i = 1; i <= y-w; i++)  a[x-i][y-i]++;
         
 if(y == w)
         if(x > q)       for(int i = q; i < x; i++)    a[i][w]++;        
         else            for(int i = x+1; i <= q; i++)    a[i][w]++;        
 
 if(x == q)
         if(y > w)       for(int i = w; i < y; i++)    a[x][i]++; 
         else            for(int i = y+1; i <= w; i++)    a[x][i]++; 
 
}

int main(int argc, char *argv[])
{
 char s[201];
     cin.get(s,201);
 int len = strlen(s);
 
 a[(int)(s[0])-97][(int)(s[1])-49] = 1;
 for(int i = 0; i <= len-4; i+=2)
    dfs((int)(s[i])-97, (int)(s[i+1])-49, (int)(s[i+2])-97, (int)(s[i+3])-49);    
 
 for(int i = 0; i < 8; i++)
 for(int j = 0; j < 8; j++)
    if(a[i][j] > MAX) MAX = a[i][j];
    
 int cnt = 0;
 for(int i = 0; i < 8; i++)
 for(int j = 0; j < 8; j++)
    if(a[i][j] == MAX) cnt++;
  
  cout << cnt << " " << MAX << endl;
 

 return EXIT_SUCCESS;
}