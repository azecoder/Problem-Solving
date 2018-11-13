#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm.>

using namespace std;

#define MAX 101
#define ll long long

ll n, m, l = 0, ev, k = 0;

ll mn=-pow(2,32), mx=pow(2,32);

int main(int argc, char *argv[])
{

    while(cin >> n)
    {
             l ++;
             if(l > 100)    l = 100;
             if(l == 2)
             
             if(ev > n)      mx = ev;
             else              mn = ev;
             
             if(l > 2)
             {
                       if(n > mx || n < mn)     k = 1;
                     if(ev < n && mn < ev)  mn = ev;

                     if(ev > n && mx > n)   mx = ev;
             }
              ev = n;
    }
    if(l >= 2)
    {
             if(k)
                    cout << "NO" << endl;
             else
                    cout << "YES" << endl;
    }
    else     cout << "YES" << endl;

    return EXIT_SUCCESS;
}