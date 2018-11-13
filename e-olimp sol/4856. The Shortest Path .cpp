#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#define M 1000000001
using namespace std;
    
    int n, m, i, j, k, q, go, s, f;
    int x, y, l, d[4001], small;
    int a[4001][4001], used[4001], path[4001], parent[4001];
    bool found;
    
    
    void dij(int x)
    {
        used[x] = 1;
        
        for(int i = 1 ; i <= n ; i ++)
        if(!used[i] && a[x][i])
        if(d[i] > d[x] + a[x][i])
        {
            parent[i] = x;
            d[i] = min(d[i], d[x] + a[x][i]);
        }
        
        
    }
    
int main()
{

    cin>>n>>m>>s>>f;
    
    
    for(i = 1 ; i<= m ; i ++)
    {
        cin>>x>>y>>l;
            a[x][y] = a[y][x] = l;
    }
    
    
    for(i = 1 ; i<= n ; i ++)
    d[i] = M;
    
    
        d[s] = 0;
        
        
        dij(s);
    
    
    found = true;    
    x = s;
        while(found && !used[f])
    {
        found = false;
        small = M;
        for(i = 1 ; i <= n ; i ++)
        if(!used[i] && d[i] < small)
        {
            go = i;
            small = d[i];
            found = true;
        }
        
        
        if(found)
        {
            
            
            dij(go);
            
            
        }
        
    }
    
    
            if(!used[f])
            {
                puts("-1");
                return 0;
            }
            
            
            cout<<d[f]<<endl;
            
            k = 0;
            i = f;
            
            
            
                while(f != s)
            {
                path[k ++] = f;
                
                f = parent[f];
            }
            
                path[k ++] = s;
    
    
    
            for(i = k - 1 ; i >= 0 ; i --)
            {
                cout<<path[i];
                    if(i)
                    putchar(' ');
            }
            
                    puts("");
    
return 0;
}