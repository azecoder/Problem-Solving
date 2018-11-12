#include <iostream>


using namespace std;
long  mas1[11][11][11],mas2[11][11][11],l,h,mas3[1001],p;
long long n;
int a,b,c,d;
int main()
{

   cin>>a>>b>>c;
   mas1[a][b][c]=1;
   mas2[a][b][c]=2;
   cin>>n;
   p=n;
   n-=3;
   mas3[l++]=a;
   mas3[l++]=b;
   mas3[l++]=c;

   while(n--){
       d=(a+b+c)%10;
       a=b;
       b=c;
       c=d;

       if(mas1[a][b][c])break;
       else
       {
           mas1[a][b][c]=1;
           mas2[a][b][c]=l;
           mas3[l]=c;

       }
       l++;
   }

   if(n>0 ){
   h=l-mas2[a][b][c];
   n%=h;
   if(n<=h-3)
   cout<<mas3[mas2[a][b][c]+n]<<endl;
   else
   cout<<mas3[mas2[a][b][c]-(h-n)]<<endl;


   }
   else
   {
       if(p<=3)
           cout<<mas3[p-1]<<endl;
           else
       cout<<d<<endl;

   }

   return 0;
} 