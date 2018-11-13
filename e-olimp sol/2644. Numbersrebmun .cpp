#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>


#include <string.h>
using namespace std;
int main(int argc, char *argv[]) {
char a[22],b[22],c[22];
int i,n,l=0,t,k;
cin>>k;
while(k--)
{ 
  cin>>a;
  l=0;
  n=strlen(a);
  for(i=0;i<n;i++)
  { 
  if(a[i]=='A' || a[i]=='a' || a[i]=='B' || a[i]=='b' || a[i]=='C' || a[i]=='c')
  a[i]=50;

  else if(a[i]=='D' || a[i]=='d' || a[i]=='E' || a[i]=='e' || a[i]=='F' || a[i]=='f')
  a[i]=51;
  else if(a[i]=='G' || a[i]=='g' || a[i]=='H' || a[i]=='h' || a[i]=='I' || a[i]==105)
  a[i]=52;

  else if(a[i]=='J' || a[i]=='j' || a[i]=='K' || a[i]=='k' || a[i]=='L' || a[i]=='l')
  a[i]=53;

  else if(a[i]=='M' || a[i]=='m' || a[i]=='N' || a[i]=='n' || a[i]=='O' || a[i]=='o')
  a[i]=54;

  else if(a[i]=='P' || a[i]=='p' || a[i]=='Q' || a[i]=='q' || a[i]=='R' || a[i]=='r' || a[i]=='S' || a[i]=='s')
  a[i]=55;

  else if(a[i]=='T' || a[i]=='t' || a[i]=='U' || a[i]=='u' || a[i]=='V' || a[i]=='v')
  a[i]=56;

  else if(a[i]=='W' || a[i]=='w' || a[i]=='X' || a[i]=='x' || a[i]=='Y' || a[i]=='y' || a[i]=='Z' || a[i]=='z')
  a[i]=57;
  }
  for(i=0;i<n;i++)
     b[i]=a[i];
  
  b[i]='\0';
  for(i=n-1;i>=0;i--)
  {    
     c[l]=a[i];
     l++;
  }
  c[l]='\0';
  if(strcmp(b,c)==0)   cout<<"YES"<<endl;
  else   cout<<"NO"<<endl;
}

return EXIT_SUCCESS;
}