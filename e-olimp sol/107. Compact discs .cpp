#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>


using namespace std;
#define size 1001

long n;
long money;
long i,j,c;
long mon[size];


int main(int argc, char *argv[])
{
  cin>>n;


  if(n>=100){
      money=n-n%100;
      n%=100;
      }
  mon[0]=money+100;


  if(n>=20){
      money+=((n-n%20)*3/2);
      n%=20;
      }
  mon[1]=money+30;

  if(n>=0)
      money+=2*n;
   mon[2]=money;

   sort(mon,mon+3);

       cout<<mon[0]<<endl;


   
   return EXIT_SUCCESS;
}