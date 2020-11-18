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

/* * * * * * * * * * * I N C L U D I N G * * * * * * * * * * * */
struct name
{
   long a, b, c;
}t[10000],x;

/* * * * * * * * * * * Q U I C K S O R T * * * * * * * * * * * */
void quicksort(int lo, int hi)
{
      int r;
      r = t[(lo+hi)/2].c;
      int i,j;
      i = lo; j = hi;
      do{
          while(t[i].c < r) i++;
          while(t[j].c > r) j--;
          if(i <= j)
       {
           x = t[i]; t[i] = t[j]; t[j] = x; i++; j--;
       }
       
      }while(i <= j);
  
      if(lo < j)        quicksort(lo, j);
      if(hi > i)        quicksort(i, hi);
}

/* * * * * * * * * * * * * * M A I N * * * * * * * * * * * * * */
int main(int argc, char *argv[])
{
   long s = 0,n,g,h;
       cin >> n >> g >> h;
      for(int i = 0; i < n; i++)
   {
          cin >> t[i].a >> t[i].b;
          t[i].c = t[i].a - t[i].b;
      }
      if(n < g+h)    cout << "-1" << endl;
      else
      {
           int l = 0,r = n-1;
           quicksort(0, n-1);
              while(g || h)
           {
               if(g)    {g--; s += t[r--].a;}
                  if(h)    {h--; s += t[l++].b;}
              }
           for(int i = l; i <= r; i++)
                  if(t[i].c > 0)        s += t[i].a;
                  else                s += t[i].b;
           cout << s << endl;
   }

  return EXIT_SUCCESS;
}