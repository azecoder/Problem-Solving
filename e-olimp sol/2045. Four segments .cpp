#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;
   struct name{
       int x,y,x1,y1;
       int n,m;
   }t[4],v1,v2,v3,v4;
   int check(name vec1, name vec2){
       return (vec1.n*vec2.n+vec1.m*vec2.m);
   }
    int c[1000],a[100][100];


int main(int argc, char *argv[])
{
   int c[1000],a[100][100];
   for(int i=1;i<=4;i++)
       cin>>t[i].x>>t[i].y>>t[i].x1>>t[i].y1;

       v1.n=t[1].x-t[1].x1;
       v1.m=t[1].y-t[1].y1;
       v2.n=t[2].x-t[2].x1;
       v2.m=t[2].y-t[2].y1;
       v3.n=t[3].x-t[3].x1;
       v3.m=t[3].y-t[3].y1;
       v4.n=t[4].x-t[4].x1;
       v4.m=t[4].y-t[4].y1;

       int l=0;
       c[l++]=check(v1,v2);a[l-1][1]=1; a[l-1][2]=2;
       c[l++]=check(v1,v3);a[l-1][1]=1; a[l-1][2]=3;
       c[l++]=check(v1,v4);a[l-1][1]=1; a[l-1][2]=4;
       c[l++]=check(v2,v3);a[l-1][1]=2; a[l-1][2]=3;
       c[l++]=check(v3,v4);a[l-1][1]=3; a[l-1][2]=4;
       c[l++]=check(v2,v4);a[l-1][1]=2; a[l-1][2]=4;

       int p=0,o=0,n;
       double s;
       for(int n=0;n<6;n++)
           if(c[n]==0 && ((t[a[n][1]].x==t[a[n][2]].x &&t[a[n][1]].y==t[a[n][2]].y)||
           (t[a[n][1]].x==t[a[n][2]].x1 &&t[a[n][1]].y==t[a[n][2]].y1)||
           (t[a[n][1]].x1==t[a[n][2]].x &&t[a[n][1]].y1==t[a[n][2]].y)||
           (t[a[n][1]].x1==t[a[n][2]].x1 &&t[a[n][1]].y1==t[a[n][2]].y1))){
               if(o==0){
                   int a2,b2,a1,b1;
       a2=t[a[n][1]].x-t[a[n][1]].x1;
       a1=t[a[n][2]].x-t[a[n][2]].x1;
        b2=t[a[n][1]].y-t[a[n][1]].y1;
       b1=t[a[n][2]].y-t[a[n][2]].y1;
       if(a2<0)a2=-a2; if(a1<0)a1=-a1; if(b2<0)b2=-b2; if(b1<0)b1=-b1;

       s=sqrt((a2*a2+b2*b2)*(a1*a1+b1*b1));
   }
               o=1;

               p++;}

       if(p==4){
           cout<<"YES\n";
           cout.precision(2);
           cout.setf(ios::fixed,ios::floatfield);
           cout<<s<<endl;
       }
           else
           cout<<"NO\n";

   return 0;
} 