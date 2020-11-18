#include <iostream>
#include <stdio.h>

using namespace std;

__int64 gray(__int64 n)
{
 
 return n ^ (n >> 1);
}
__int64 a;
int main(){
   
   while(scanf("%I64d",&a)!=EOF){
   cout<<gray(a)<<endl;
   }
   return 0;
}