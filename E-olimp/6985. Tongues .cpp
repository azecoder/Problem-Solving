#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>

using namespace std;

char a[255];
int n,i,j,k;
int main(int argc, char *argv[]) 
{
  while(gets(a))
  {
     n=strlen(a);
     for(i=0;i<n;i++)
     {
        if(a[i]=='a')        a[i]='e';
        else if(a[i]=='e')   a[i]='a';
        else if(a[i]=='i')   a[i]='o';
        else if(a[i]=='o')    a[i]='i';
        else if(a[i]=='y')   a[i]='u';
        else if(a[i]=='u')   a[i]='y';
        else if(a[i]=='b')   a[i]='p';
        else if(a[i]=='p')   a[i]='b';
        else if(a[i]=='k')   a[i]='v';
        else if(a[i]=='v')   a[i]='k';
        else if(a[i]=='x')   a[i]='j';
        else if(a[i]=='j')   a[i]='x';
        else if(a[i]=='z')   a[i]='q';
        else if(a[i]=='q')   a[i]='z';
        else if(a[i]=='n')   a[i]='t';
        else if(a[i]=='t')   a[i]='n';
        else if(a[i]=='h')   a[i]='s';
        else if(a[i]=='s')   a[i]='h';
        else if(a[i]=='d')   a[i]='r';
        else if(a[i]=='r')   a[i]='d';
        else if(a[i]=='c')   a[i]='l';
        else if(a[i]=='l')   a[i]='c';
        else if(a[i]=='w')   a[i]='m';
        else if(a[i]=='m')   a[i]='w';
        else if(a[i]=='g')   a[i]='f';
        else if(a[i]=='f')   a[i]='g'; 
  
  
        if(a[i]=='A')        a[i]='E';
        else if(a[i]=='E')   a[i]='A';
        else if(a[i]=='I')   a[i]='O';
        else if(a[i]=='O')    a[i]='I';
        else if(a[i]=='Y')   a[i]='U';
        else if(a[i]=='U')   a[i]='Y';
        else if(a[i]=='B')   a[i]='P';
        else if(a[i]=='P')   a[i]='B';
        else if(a[i]=='K')   a[i]='V';
        else if(a[i]=='V')   a[i]='K';
        else if(a[i]=='X')   a[i]='J';
        else if(a[i]=='J')   a[i]='X';
        else if(a[i]=='Z')   a[i]='Q';
        else if(a[i]=='Q')   a[i]='Z';
        else if(a[i]=='N')   a[i]='T';
        else if(a[i]=='T')   a[i]='N';
        else if(a[i]=='H')   a[i]='S';
        else if(a[i]=='S')   a[i]='H';
        else if(a[i]=='D')   a[i]='R';
        else if(a[i]=='R')   a[i]='D';
        else if(a[i]=='C')   a[i]='L';
        else if(a[i]=='L')   a[i]='C';
        else if(a[i]=='W')   a[i]='M';
        else if(a[i]=='M')   a[i]='W';
        else if(a[i]=='G')   a[i]='F';
        else if(a[i]=='F')   a[i]='G';
  
        cout<<a[i];
     
     }
     cout<<endl;
  }

  return 0;
}