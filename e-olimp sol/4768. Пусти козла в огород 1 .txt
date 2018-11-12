#include <cstdlib>
#include <iostream>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main(int argc, char *argv[])
{
   double x1,Y1,x2,y2,x3,y3,A,B,C,A1,B1,C1,A2,B2,C2,a,b,c;
      cin>>x1>>Y1>>x2>>y2>>x3>>y3;

   A=sqrt((x2-x1)*(x2-x1)+(y2-Y1)*(y2-Y1));
   B=sqrt((x3-x1)*(x3-x1)+(y3-Y1)*(y3-Y1));
   C=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

   A1=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
   B1=sqrt((x2-x1)*(x2-x1)+(y2-Y1)*(y2-Y1));
   C1=sqrt((x3-x1)*(x3-x1)+(y3-Y1)*(y3-Y1));

   A2=sqrt((x3-x1)*(x3-x1)+(y3-Y1)*(y3-Y1));
   B2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
   C2=sqrt((x2-x1)*(x2-x1)+(y2-Y1)*(y2-Y1));


   a=acos((A*A+B*B-C*C)/(2*A*B))*180/PI;
   b=acos((A1*A1+B1*B1-C1*C1)/(2*A1*B1))*180/PI;
   c=acos((A2*A2+B2*B2-C2*C2)/(2*A2*B2))*180/PI;

   if(a>b && a>c)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<a<<endl;
   }
   else if(b>a && b>c)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<b<<endl;
   }
   else if (c>a && c>b)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<c<<endl;
   }
   else if (a==b && b==c)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<a<<endl;
   }
   else if (a==b && c>b)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<c<<endl;
   }
   else if (b==c && a>b)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<a<<endl;
   }
   else if (a==c && b>a)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<b<<endl;
   }
   else if (a==b && a>c)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<a<<endl;
   }
   else if (a==c && a>b)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<a<<endl;
   }
   else if (b==c && b>a)
   {
      cout.setf(ios::fixed);
      cout.precision(6);
      cout<<b<<endl;
   }

   return EXIT_SUCCESS;
}