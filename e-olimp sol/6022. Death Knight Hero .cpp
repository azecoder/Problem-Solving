#include <iostream>
#include <cstring>

using namespace std;

int i,j,n,m,flag,cnt;
#define size 1001
char a[size];

int main()
{
  cin >> n;
  for(i = 1; i <= n; i ++)
  {
      flag = 0;
      scanf("%s",a);
      m = strlen(a);

      for(j = 0; j < m; j ++)
          if(a[j] == 'C' && a[j+1] == 'D')
          {
              flag = 1;    break;
          }

      if(flag == 0)    cnt++;
  }

  printf("%d\n", cnt);

  return 0;
}