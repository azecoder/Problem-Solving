#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
 {
  if(b==0) return a;
  else return gcd(b,a%b);
 }
int main(int argc, char *argv[])
{
int a,b;
  while(scanf("%d %d", &a, &b)!=EOF){

  if(gcd(a, b)==1)
    printf("YES\n");
  else printf("NO\n");
}
 
 return 0;
}