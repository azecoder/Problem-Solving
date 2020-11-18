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
    int sum=0;

    if(a[n-1]=='5') cout<<"Yes"<<endl<<"No"<<endl;
    else if(a[n-1]=='0') cout<<"Yes"<<endl<<"Yes"<<endl;
    else            cout<<"No"<<endl<<"No"<<endl;
    
    return 0;
}