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
#include <utility>
#include <set>
#include <math.h>
using namespace std;

#define maxn 102

typedef long long ss;

ss Table[maxn][maxn];
ss Parent[maxn][maxn];
char Fg[maxn][maxn];

ss R, C;

ss Recur(ss r, ss c) {
       ss s, d, k, x, y, z, minc;
       if(c == C-1) return Table[r][c];
       if(Fg[r][c]) return Table[r][c];

       Fg[r][c] = 1;
       
       s = (r-1+R) % R;
       d = r;
       k = (r + 1) % R;

       x = Recur(s,c+1);
       y = Recur(d,c+1);
       z = Recur(k, c+1);
       
       minc = s;
       if(x>y || (x == y && minc>d)) {
               x = y;
               minc = d;
       }
       if(x > z || (x == z && minc > k)) {
               x = z;
               minc = k;
       }
       Table[r][c] += x;
       Parent[r][c] = minc;
       return Table[r][c];
}

void Print(ss r, ss c) {
       if(c == C-1) {
               cout<<" "<<r+1;
               return;
       }
       if(c == 0) 
               cout<<r+1;
       else cout<<" "<<r+1;
       Print(Parent[r][c], c+1);
}

void Cal() {
       ss i, min, d, f = 0;
       ss minr;
       for(i = 0; i<R; i++){
               d = Recur(i,0);
               if(f++ == 0) {
                       min = d;
                       minr = i;
               }
               else if(d < min){
                       min = d;
                       minr = i;
               }
       }
       if(C == 1) {
               cout<<minr+1<<endl;
               cout<<min<<endl;
               return;
       }
       Print(minr,0);
       cout<<endl;
       cout<<min;
       cout<<endl;
}

void Free() {
       int i, j;
       for(i = 0; i<R; i++) for(j = 0; j<C; j++) Fg[i][j] = 0;
}


int main() {
       int i, j;
       
       while(cin>>R>>C ){
               for( i = 0; i<R; i++) {
                       for(j = 0; j<C; j++)
                               cin>>Table[i][j];
               }
               Cal();
               Free();
       }
       return 0;
}