#include <cstdlib>
#include <iostream>

using namespace std;
char mas[1000][1000];
int main(int argc, char *argv[])
{
   long a,b,s=0;
   cin>>a>>b;
   for(int i=0;i<b;i++)
       for(int j=0;j<a;j++)
           cin>>mas[i][j];
           s=0;
   for(int i=0;i<b;i++)
       for(int j=0;j<a;j++){
           if(mas[i][j]!=mas[i][j+1] && j<a-1 )
               s++;
           if(mas[i][j]!=mas[i-1][j]  && i>0)
               s++;
       }
       cout<<s<<endl;

   return 0;
} 