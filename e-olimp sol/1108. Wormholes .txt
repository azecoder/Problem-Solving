#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <cstring> 
#include <string> 
#include <cctype> 
#include <stack> 
#include <queue> 
#include <list> 
#include <vector> 
#include <map> 
#include <sstream> 
#include <cmath> 
#include <bitset> 
#include <utility> 
#include <set> 
#define INT_MAX 2147483647 
#define INT_MIN -2147483648 
#define pi acos(-1.0) 
#define N 1000000 
#define LL long long 
using namespace std; 

struct edges 
{ 
int u; 
int v; 
int w; 
} e [2000 + 10]; 

int main() 
{  
int n, m; 
scanf ("%d %d", &n, &m);
int i;
for ( i = 0; i < m; i++ ) 
scanf ("%d %d %d", &e [i].u, &e [i].v, &e [i].w); 

int d [1000 + 10]; 
for ( int i = 0; i <= n; i++ ) d [i] = INT_MAX; 

d [0] = 0; 

for ( int i = 0; i < n - 1; i++ ) { 
for ( int j = 0; j < m; j++ ) { 
if ( d [e [j].u] + e [j].w < d [e [j].v] ) 
d [e [j].v] = d [e [j].u] + e [j].w; 
} 
} 

bool have_negative_cycle = false; 

for ( int j = 0; j < m; j++ ) { 
if ( d [e [j].u] + e [j].w < d [e [j].v] ) 
have_negative_cycle = true; 
} 

if ( have_negative_cycle ) printf ("possible\n"); 
else printf ("not possible\n"); 


return 0; 
}