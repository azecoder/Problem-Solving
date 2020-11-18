#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <iomanip>

using namespace std;
#define size 10001
#define PI 3.14159265

double x1,v1,x2,v2,x3,v3;
double sahe;
double l1,l2,l3;
double minn,orta,maxx;
double x,result;

int main(int argc, char *argv[])
{
   cin>>x1>>v1>>x2>>v2>>x3>>v3;

/*.......................... sahe ...........................*/
   sahe=fabs(((x1*v2-x2*v1)+(x2*v3-x3*v2)+(x3*v1-x1*v3))/2);

/*................. tereflerin uzunluqlari ..................*/
   l1=sqrt((x1-x2)*(x1-x2)+(v1-v2)*(v1-v2));
   l2=sqrt((x2-x3)*(x2-x3)+(v2-v3)*(v2-v3));
   l3=sqrt((x3-x1)*(x3-x1)+(v3-v1)*(v3-v1));

/*..................... iki balaca teref ....................*/
   if(l1<=l2 && l1<=l3){
       minn=l1;
       if(l2<=l3) { orta=l2; maxx=l3; }
       else       { orta=l3; maxx=l2; }
       }
   else if(l2<=l1 && l2<=l3){
       minn=l2;
       if(l1<=l3) { orta=l1; maxx=l3; }
       else       { orta=l3; maxx=l1; }
       }
   else if(l3<=l1 && l3<=l2){
       minn=l3;
       if(l1<=l2) { orta=l1; maxx=l2; }
       else       { orta=l2; maxx=l1; }
       }

/*...................... bucagin tapilmasi ..................*/
   x=(minn*minn+orta*orta-maxx*maxx)/(2*minn*orta);
   result=acos(x)*180.0/PI;

   cout<<std::fixed;
   cout<<setprecision(6)<<result<<endl;


   
   return EXIT_SUCCESS;
}