#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>


#define MAX 1005

char a[MAX],b[MAX],ans[MAX];
unsigned short int i,idx,j,k,occ[2][127];
int main(void){
   while(gets(a)){
       gets(b);
       memset(occ,0,sizeof(occ));
       for(i = 0; a[i]; i++) occ[0][a[i]]++;
       for(i = 0; b[i]; i++) occ[1][b[i]]++;
       for(idx = 0,i = 1; i < 127; i++){
           if(occ[0][i]>occ[1][i]) k = occ[1][i];
           else k = occ[0][i];
           for(j = 0; j < k; j++) ans[idx++] = i;
       }
       ans[idx] = 0;
       puts(ans);
   }
   
   return 0;
}