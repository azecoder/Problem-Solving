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

int a[size][size] = {0};
void dfs(int x, int y, int q, int w)
{
//    cout << x << y << q <<w << endl;
 if(x < q)
         if(y < w)       for(int i = 0; i <= w-y; i++)  a[x+i][y+i] = 1;
         else            for(int i = 0; i <= y-w; i++)  a[x+i][y-i] = 1;
 if(x > q)
         if(y < w)       for(int i = 0; i <= w-y; i++)  a[x-i][y+i] = 1;
         else            for(int i = 0; i <= y-w; i++)  a[x-i][y-i] = 1;
         
 if(y == w)
         if(x > q)       for(int i = q; i <= x; i++)    a[i][w] = 1;        
         else            for(int i = x; i <= q; i++)    a[i][w] = 1;        
 
 if(x == q)
         if(y > w)       for(int i = w; i <= y; i++)    a[x][i] = 1; 
         else            for(int i = y; i <= w; i++)    a[x][i] = 1; 
 
}

int main(int argc, char *argv[])
{
 char s[201];
     cin.get(s,201);
 int len = strlen(s);
 if(len == 2) cout << "1" << endl;
 else
 {
      for(int i = 0; i <= len-4; i+=2)
          dfs((int)(s[i])-97, (int)(s[i+1])-49, (int)(s[i+2])-97, (int)(s[i+3])-49);    
 
      int cnt = 0;
      for(int i = 7; i >= 0; i--)
      for(int j = 0; j < 8; j++)
          if(a[i][j] == 1) cnt++;
       
      cout << cnt << endl;
  }
 
 
 return EXIT_SUCCESS;
}