#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;


int year,month,i,n,m,c,last=3;
int dayOfMonth[12]={31,31,28,31,30,31,30,31,31,30,31,30};
int result[7]={0};

int x;
int sub(int s, int y) {
   memset(result, 0, sizeof(result));
   for(year=x;year<=y;++year){
       if(year%400==0||(year%100!=0&&year%4==0)) dayOfMonth[2]=29;
       for(month=0;month<12;++month){
           last=(last+dayOfMonth[month])%7;
           if(year >= s)
               result[last]++;
       }
       dayOfMonth[2]=28;
   }
   return result[5];
}

int main()
{

   cin >> n >> m;
   if(n > m) {
       c = n;
       n = m;
       m = c;
   }
   if(n > 1900)        x = 1900;
   else if(n > 1500)   x = 1500;
   else if(n > 1100)   x = 1100;
   //cout << sub(m) << " " << sub(n) << endl;
   cout << sub(n, m) << endl;

   return 0;
} 