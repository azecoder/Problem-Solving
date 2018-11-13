#include <cstdlib>
#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{long b[1000],i=0,j,k,n=0,m;
char a[1000],c[100];
cin.get(a,1000);
m=strlen(a);
for(i=0;i<m;i++){
     c[0]=a[i];
    // cout<<"a="<<a[i]<<"\n";
b[i]=atoi(c);
//cout<<"b="<<b[i]<<"\n";
}

for(i=0;i<m;i++)
{if(b[i]==0 || b[i]==6 || b[i]==9)
{n+=6;
}if(b[i]==1)
{n+=2;
}if(b[i]==2 || b[i]==3 || b[i]==5)
{n+=5;
}if(b[i]==4)
{n+=4;
}if(b[i]==7)
{n+=3;
}if(b[i]==8)
{n+=7;
}}
printf("%ld\n",n);
 return EXIT_SUCCESS;
}