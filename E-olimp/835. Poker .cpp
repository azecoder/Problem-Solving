#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

int main(int argc, char *argv[])
{
 int a,b,c,d,e,i,j,son,x[14],y[6],say=0;
 cin>>a>>b>>c>>d>>e;
 int z[]={a,b,c,d,e};

 for(i=0; i<4; i++)
 for(j=0; j<4; j++)
 if(z[j]>z[j+1])
 swap(z[j],z[j+1]);

 for(i=0; i<4; i++)
 if(z[i]==z[i+1]-1)
 say++;

 if(say==4)
 {
     cout<<"Straight"<<endl;
     return 0;
 }


 for(i=1; i<=13; i++)
 x[i]=0;

 x[a]++;
 x[b]++;
 x[c]++;
 x[d]++;
 x[e]++;

 j=1;

 for(i=1; i<=13; i++)
 if(x[i]!=0)
 y[j++]=x[i];

 son=j-1;

 if(y[1]==5)
 {
     cout<<"Impossible"<<endl;
     return 0;
 }
 else if(y[1]==4 || y[2]==4)
 {
     cout<<"Four of a Kind"<<endl;
     return 0;
 }
 else if((y[1]==3 && y[2]==2) || (y[2]==3 && y[1]==2))
 {
     cout<<"Full House"<<endl;
     return 0;
 }


 if(y[1]==3 || y[2]==3 || y[3]==3)
 cout<<"Three of a Kind"<<endl;
 else if((y[1]==1 && y[2]==2 && y[3]==2)||(y[1]==2 && y[2]==1 && y[3]==2)||(y[1]==2 && y[2]==2 && y[3]==1))
 cout<<"Two Pairs"<<endl;
 else if(y[1]==2 || y[2]==2 || y[3]==2 || y[4]==2)
 cout<<"One Pair"<<endl;
 else
 cout<<"Nothing"<<endl;


   
   return EXIT_SUCCESS;
}