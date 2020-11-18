#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

char a[255];
int i,j,h,n,say,x[9][9];

int column(int x)
{
  if(x==97)          return 1;
  else if(x==98)     return 2;
  else if(x==99)     return 3;
  else if(x==100)    return 4;
  else if(x==101)    return 5;
  else if(x==102)    return 6;
  else if(x==103)    return 7;
  else if(x==104)    return 8;
}

int row(int x)
{
  if(x==49)         return 8;
  else if(x==50)    return 7;
  else if(x==51)    return 6;
  else if(x==52)    return 5;
  else if(x==53)    return 4;
  else if(x==54)    return 3;
  else if(x==55)    return 2;
  else if(x==56)    return 1;
}

int main()
{
  scanf("%s",a);
  n=strlen(a);

  if(n==2)
  {
      printf("No\n");
      return 0;
  }

  for(i=0; i<n-2; i=i+2)
  {
      if(a[i]==a[i+2])
      {
          if(a[i+1]>a[i+3])
          {
              for(j=a[i+3]; j<=a[i+1]; j++)     x[row(j)][column(a[i])]=1;
          }
          else
          {
              for(j=a[i+1]; j<=a[i+3]; j++)     x[row(j)][column(a[i])]=1;
          }
      }
      else if(a[i+1]==a[i+3])
      {
          if(a[i]>a[i+2])
          {
              for(j=a[i+2]; j<=a[i]; j++)     x[row(a[i+1])][column(j)]=1;
          }
          else
          {
              for(j=a[i]; j<=a[i+2]; j++)     x[row(a[i+1])][column(j)]=1;
          }
      }
      else
      {
          if(a[i]>a[i+2] && a[i+1]>a[i+3]) // sola ve asagiya dogru gedis
          {
              for(j=max(a[i],a[i+2]), h=max(a[i+1],a[i+3]); j>=min(a[i],a[i+2]), h>=min(a[i+1],a[i+3]); j--, h--)
                  x[row(h)][column(j)]=1;
          }
          else if(a[i]<a[i+2] && a[i+1]>a[i+3])  // saga ve asagiya dogru gedis
          {
              for(j=min(a[i],a[i+2]), h=max(a[i+1],a[i+3]); j<=max(a[i],a[i+2]), h>=min(a[i+1],a[i+3]); j++, h--)
                  x[row(h)][column(j)]=1;
          }
          else if(a[i]<a[i+2] && a[i+1]<a[i+3])  // sola ve yuxariya dogru gedis
          {
              for(j=min(a[i],a[i+2]), h=min(a[i+1],a[i+3]); j<=max(a[i],a[i+2]), h<=max(a[i+1],a[i+3]); j++, h++)
                  x[row(h)][column(j)]=1;
          }
          else                             // saga ve yuxariya dogru gedis
          {
              for(j=max(a[i],a[i+2]), h=min(a[i+1],a[i+3]); j>=min(a[i],a[i+2]), h<=max(a[i+1],a[i+3]); j--, h++)
                  x[row(h)][column(j)]=1;
          }
      }
  }


  for(i=1; i<=8; i++)
      for(j=1; j<=8; j++)
          if(x[i][j]==0)
          {
              printf("No\n");
              return 0;
          }

  printf("Yes\n");

  return 0;
}