#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>


using namespace std;


int  minn(int a, int b)
{
    if(a>b) return b;
    else return a;
}

int a[12]={1,2,4,8,16,32,64,128,256,512,1024};
int n,i,k;
int main(int argc, char *argv[])
{
   cin>>n;

    while(n!=0)
       {
             i=0;
             while(n>a[i])
                   {
                        i++;
                   }

             i--;
             n=minn((n-a[i]),(a[i+1]-n));
             if(n!=0)
                   k++;
       }

    cout<<k+1<<endl;



return EXIT_SUCCESS;
}