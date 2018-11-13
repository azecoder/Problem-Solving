#include <iostream>
#include <cstdlib>


using namespace std;
long min(long x, long y){
   if(x<y)return x; return y;
}
long name(long  x,long y){

   if(x<=1)return 0;
   if(y==2)
         return min(name(x/2,2)+x%2,name(x/2,3)+x%2)+1;
   if(y==3)
       return min(name(x/3,2)+x%3,name(x/3,3)+x%3)+1;



}
int main()
{
   long n;
   while(cin>>n)
   cout<<min(name(n,2), name(n,3))<<endl;


   return EXIT_SUCCESS;
} 