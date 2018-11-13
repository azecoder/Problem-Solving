#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>

int main()
{
   long sum,n;
   register int i,x,y;
   
   while(scanf("%ld",&n)!=EOF)
   {
       sum=0;
       for(i=1;sum<n;i++)
           sum+=i;
       if(i&1)
       {
           x=(n+i)-(sum+1);
           y=i-x;
       }
       else
       {
           y=(n+i)-(sum+1);
           x=i-y;
       }
       printf("TERM %ld IS %d/%d\n",n,x,y);
   }

   
   return 0;
}