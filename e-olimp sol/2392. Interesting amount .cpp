#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n,a,b,c,d,e;
  cin>>n;
  a=n/100;
  b=n/10%10;
  c=n%10;
  if(a==b && b==c){
  cout<<2*n<<endl;
}
else  if(b==0 && c==0){

  cout<<200*a<<endl;
}
 else  if(a==b && c==0){
  d=110*a;
  e=101*a;
  cout<<d+e<<endl;;
}
else if(a>b && c==0){
  d=100*a+10*b;
  e=100*b+a;
   cout<<d+e<<endl;
}
else  if(a<b && c==0){
  d=100*b+10*a;
  e=100*a+b;
   cout<<d+e<<endl;
}
else if(a==c && b==0){
  d=110*a;
  e=101*a;
    cout<<d+e<<endl;
}
else  if(a>c && b==0){
  d=100*a+10*c;
  e=100*c+a;
   cout<<d+e<<endl;
}
else  if(a<c && b==0){
  d=100*c+10*a;
  e=100*a+c;
    cout<<d+e<<endl;
}
else if(a>=b && b>=c && c!=0){
  d=100*a+10*b+c;
  e=100*c+10*b+a;
    cout<<d+e<<endl;
}
else if(a>=c && c>=b && b!=0){
  d=100*a+10*c+b;
  e=100*b+10*c+a;
   cout<<d+e<<endl;
}
else if(a<=b && b<=c){
  d=100*c+10*b+a;
  e=100*a+10*b+c;
    cout<<d+e<<endl;
}
else if(a<=c && c<=b){
  d=100*b+10*c+a;
  e=100*a+10*c+b;
    cout<<d+e<<endl;
}
else if(b>=a && a>=c && c!=0){
  d=100*b+10*a+c;
  e=100*c+10*a+b;
    cout<<d+e<<endl;
}
else if(b<=a && a<=c && b!=0){
  d=100*c+10*a+b;
  e=100*b+10*a+c;
    cout<<d+e<<endl;
}
  return EXIT_SUCCESS;
}