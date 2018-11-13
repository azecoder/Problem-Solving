#include <stdio.h>
#include <string.h>

char a[10],b[6]="sheep";
int n,m,i,j,h,say,l,flag;


int main()
{
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
      say=0;
      scanf("%d",&m);
      for(j=1; j<=m; j++)
      {
          flag=0;
          scanf("%s",a);
          l=strlen(a);
          if(l==5)
          {
              for(h=0; h<5; h++)
                  if(a[h]!=b[h])
                  {
                      flag=1;    break;
                  }

              if(flag==0)    say++;
          }
      }

      printf("Case %d: This list contains %d sheep.\n",i,say);
      if(i!=n)    printf("\n");
  }

  return 0;
}