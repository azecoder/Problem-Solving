#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;
   char a[10000001];
   long long n,h,s;
int main(int argc, char *argv[])
{
   map<char, long> m;
   m['A']=10;
   m['B']=11;
   m['C']=12;
   m['D']=13;
   m['E']=14;
   m['F']=15;
   m['1']=1;
   m['2']=2;
   m['3']=3;
   m['4']=4;
   m['5']=5;
   m['6']=6;
   m['7']=7;
   m['8']=8;
   m['9']=9;


   gets(a);
   n=strlen(a);
   h=1;
   s=0;
   for(int i=n-1;i>=0;i--){
       h=1;
       s+=(m[a[i]]%5)%5;


   }

   cout<<s%5<<endl;



 
   return EXIT_SUCCESS;
} 