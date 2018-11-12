#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int n;
#define size 1000001

char a[size];

using namespace std;

int main(int argc, char *argv[])
{

      gets(a);

    n=strlen(a);
    int i;
    long sum=0;
    for(i=0; i<n; i+=2)
       sum+=(a[i]-48);
    for(i=1; i<n; i+=2)
       sum-=(a[i]-48);

    if(sum%11==0)  cout<<"Yes"<<endl;
    else           cout<<"No"<<endl;
    
    return 0;
}