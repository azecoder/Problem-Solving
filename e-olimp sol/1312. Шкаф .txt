#include<stdio.h> 
#include<math.h>

int main() {

int a,b,c,x,y; 
   scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);

if((x>=a)&&(y>=b||y>=c)) printf("YES\n"); 
else if(x>=b&&(y>=a||y>=c)) printf("YES\n"); 
else if(x>=c&&(y>=a||y>=b)) printf("YES\n"); 
else printf("NO\n"); 

return 0; 
}