#include <cstdlib>
#include <iostream>

using namespace std;
int mas[1000][1000];
int maxim(int a,int b, int c){

   if(a>=b &&a>=c)return a;
   if(b>=a &&b>=c)return b;
   return c;

   }
int main(int argc, char *argv[])
{
   int n;

   string a,b;

   while(    cin>>a>>b){
       for(int i=0;i<=a.size()+10;i++)
           for(int j=0;j<=b.size()+10;j++)
               mas[i][j]=0;
       for(int i=1;i<=a.size();i++)
           for(int j=1;j<=b.size();j++)
               if(a[i-1]==b[j-1])
                   mas[i][j]=maxim(mas[i-1][j],mas[i][j-1],mas[i-1][j-1]+1);
                   else
                   mas[i][j]=maxim(mas[i-1][j],mas[i][j-1],mas[i-1][j-1]);



       cout<<mas[a.size()][b.size()]<<endl;



   }
   
   return EXIT_SUCCESS;
} 