#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char s[21][21];
  int i,j,n,m,k=0;
  scanf("%d%d", &n,&m);

  for(j=0;j<n;j++)
     scanf("%s",&s[j]);
  
  if(s[0][0]=='#')   k++;
  for(j=1;j<m;j++)
     if(s[0][j]=='#' && s[0][j-1]=='.')   k++;
  for(i=1;i<n;i++)
     if(s[i][0]=='#' && s[i-1][0]=='.')   k++;
  for(i=0;i<n;i++)
  {
     for(j=0;j<m;j++) 
        if(s[i][j]=='#' && ((s[i-1][j]=='.' && s[i][j-1]=='.') || (s[i-1][j]=='0' && s[i][j-1]=='0')) )   k++; 
  }

  printf("%d\n", k);

 
 return 0;
}