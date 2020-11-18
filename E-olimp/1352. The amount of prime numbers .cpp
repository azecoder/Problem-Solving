#include <cstdlib>
#include <iostream>
#include <math.h>

#define massiv 100000001
int i,j, b[massiv];
int x,cem,k;
#define n 1
#define m 1000000


using namespace std;

int main(int argc, char *argv[])
{

   cin>>x;

b[1]=1;
for(i=2;i<=sqrt(m);i++)
  {
    if(!b[i])
      {
        for(j=i;j*i<=m;j++)
          {
            if(!b[i*j])
             {
               b[i*j]=1;
             }
          }
      }
  }


 for(i=n;i<=m;i++)
    {
      if(!b[i])
       {
      goto bura;
       }
    }




bura:
 for(i=n;i<=m;i++)
    {
      if(!b[i])
       {
          cem+=i;
          if(cem%x)
             {
               k++;
             }
          else
             {
               cout<<k+1; break;
             }
       }
    }

 cout<<endl;

 
 return EXIT_SUCCESS;
}