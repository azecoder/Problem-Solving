#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>



using namespace std;
#define size 1001


char x,y,z;
int a,b,c,d;


int main(int argc, char *argv[])
{
   cin>>a>>x>>b>>y>>c>>z>>d;

   if(a<256 && b<256 && c<256 && d<256 && x=='.' && y=='.' && z=='.')
       cout<<"1"<<endl;
   else
       cout<<"0"<<endl;


   
   return EXIT_SUCCESS;
}