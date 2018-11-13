#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char *argv[])
{
  int x1,x2,y2,y1,r1,r2,k,h,h1,y,m=0,l=0,p,l1=0;
  double k1,k2;
  cin>>x1>>y1>>r1>>x2>>y2>>r2;
  for(int i=x1-r1;i<=x1+r1;i++){
      for(int j=y1-r1;j<=y1+r1;j++){

          if(r1>=sqrt((x1-i)*(x1-i)+(y1-j)*(y1-j))){


          l++;
      }
      }
  }

for(int i=x2-r2;i<=x2+r2;i++){
      for(int j=y2-r2;j<=y2+r2;j++){

          if(r2>=sqrt((x2-i)*(x2-i)+(y2-j)*(y2-j))){

          l1++;
      }
      }
  }



if(r2+r1==sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))){
      l--;

  }

    y=r1>r2?r2:r1;
  p=r1>r2?r1:r2;
  if((r2+r1)>sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))&& sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+y>p){

      h=x1>=x2?x1:x2;
      h1=x1>=x2?x2:x1;
      k=y1>=y2?y1:y2;
      //k1=y1>y2?y2:y1;
      y=y1>=y2?r1:r2;

      for(int i=-100;i<=100;i++){
      for(int j=-100;j<=100;j++){
          k1=sqrt((x2-i)*(x2-i)+(y2-j)*(y2-j));
          k2=sqrt((i-x1)*(i-x1)+(j-y1)*(j-y1));
          if(k1<=r2&&k2<=r1)
          l--;

      }
  }

  }
 /* if(r2+r1<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))){
      l/=2;

  }*/

    y=r1>r2?r2:r1;
  p=r1>r2?r1:r2;
  if((x1==x2 && y1==y2) || sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+y<=p){

      if(l1>l)
      l=0;
      else
      l1=0;

  }



  cout<<l1+l<<"\n";
  
  return EXIT_SUCCESS;
}