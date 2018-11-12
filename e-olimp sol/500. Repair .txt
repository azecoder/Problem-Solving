#include <stdio.h>
#include <stdlib.h>

int n, L[1001], W[1001], H[1001], S[1001], k, l, i;
int main(int argc, char *argv[])
{
  scanf("%d", &n);
for(i=0; i<n; i++)
  scanf("%d %d %d", &L[i], &W[i], &H[i]);
  k=16;
for(i=0; i<n; i++)
{
 S[i]=2*H[i]*(W[i]+L[i]);
  l=S[i]/k;
//    printf("%d ", S[i]);
  if(S[i]%k)
    printf("%d\n", l+1);

  else
    printf("%d\n", l);
}


return 0;
}