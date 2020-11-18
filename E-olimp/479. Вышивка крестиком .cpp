#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>


using namespace std;

#define MAX 100

void p(int n)
{
     char a[MAX][MAX];

    for(int i=1;i<=n;i++)
          for(int j=1;j<=n;j++)    a[i][j]=' ';

    for(int j=1;j<=n;j++)
          a[j][j]='X';

    int j=n;
    for(int i=1;i<=n;i++)
    {
              a[i][j]='X';
            j--;
    }
    
    bool p=false,b=false;

    for(int i=1;i<=n;i++)
    {
              for(int j=1;j<=n;j++)
            {
                      if(p==true && i==(n/2)+1 )        continue;
                    if(p==true && b==true)         continue;
                    if(a[i][j]=='X' && p==false)
                    {
                                p=true; cout<<a[i][j]; continue;
                    }
                    else if(a[i][j]=='X' && b==false && p==true)
                    {
                                b=true; cout<<a[i][j]; continue; 
                    }
                    else cout << a[i][j];
            }
            p=false; b=false;
            cout<<endl;
    }
}

int main()
{
    int n,a[1000];
       cin>>n;
       
       for(int i=1;i<=n;i++)
               cin>>a[i];

       for(int i=1;i<=n;i++){ p(a[i]); if(i!=n)cout<<endl; }
              

   return EXIT_SUCCESS;
}