#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#define INF 250010
using namespace std;

int p[10000],diffp[10000],t[1000010],difft[1000010];

int n,pi[INF],j,yer,cnt;

/*string readline()
{
  int c = getchar();
  while (c < 33)
      c = getchar();
  string s = "";
  while (c > 32)
  {
      s += c;
      c = getchar();
  }
  return s;
}*/

int l1,l2;

int main()
{
  cin>>n;
  for(int o=0; o<n; o++)
  {
      cin>>l1;
      for(int i=0; i<l1; i++)
          scanf("%d",&diffp[i]);
      cin>>l2;
      for(int i=0; i<l2; i++)
          scanf("%d",&difft[i]);
      if(l1==1)
      {
          if(l2==0)
              printf("0\n");
          else
              printf("1\n");
          continue;
      }

      if(l2==0 || l2==1)
      {
          printf("0\n");
          continue;
      }

      if(l2<l1)
      {
          printf("0\n");
          continue;
      }

      for(int i=0;i<l1-1;i++)
          p[i]=diffp[i+1]-diffp[i];
      for(int i=0;i<l2-1;i++)
          t[i]=difft[i+1]-difft[i];
      l1--;
      l2--;


      j=-1;
      //t=t+t;
      pi[0]=-1;
      for(int i=1; i<l1; i++)
      {
          while(j>-1 && p[j+1]!=p[i])j=pi[j];
          if(p[j+1]==p[i])j++;
          pi[i]=j;
      }
      //for(int i=1;i<p.size();i++)
      //    cout<<pi[i];
      //cout<<endl;
      yer=-1;
      j=-1;
      for(int i=0; i<l2; i++)
      {
          while(j>-1 && p[j+1]!=t[i])j=pi[j];
          if(p[j+1]==t[i])j++;
          //cout<<j<<" ";
          if(j==l1-1)
          {
              cnt++;
              j=pi[j];
              yer=i;
              break;
          }
          //else
          //    j++;
      }
      //cout<<yer<<endl;
      if(yer!=-1)
      {
          printf("%d\n",1);
      }
      else
          printf("%d\n",0);
      //cout<<endl;
      /*if(yer==n)
          cout<<0<<endl;
      else
          cout<<yer<<endl;
      */


  }
  //cout<<cnt<<endl;
 
  return 0;
} 