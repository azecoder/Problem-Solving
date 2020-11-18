#include <iostream>

int i=1,j=1,n,say=1,a[101][101],used[101][101];

int main(int argc, char *argv[])
{
  scanf("%d",&n);

  while(1)
  {
      while(j<=n && used[i][j]==0)
      {
          used[i][j]=1;
          a[i][j]=say;
          say++;
          j++;
      }
      j--;
      i++;

      while(i<=n && used[i][j]==0)
      {
          used[i][j]=1;
          a[i][j]=say;
          say++;
          i++;
      }
      i--;
      j--;

      while(j>=1 && used[i][j]==0)
      {
          used[i][j]=1;
          a[i][j]=say;
          say++;
          j--;
      }
      j++;
      i--;

      while(i>=1 && used[i][j]==0)
      {
          used[i][j]=1;
          a[i][j]=say;
          say++;
          i--;
      }
      i++;
      j++;

      if(say == n*n+1)    break;
  }


  for(i=1; i<=n; i++)
  {
      for(j=1; j<n; j++)
          printf("%d ",a[i][j]);
      printf("%d\n",a[i][n]);
  }

 
  return EXIT_SUCCESS;
}