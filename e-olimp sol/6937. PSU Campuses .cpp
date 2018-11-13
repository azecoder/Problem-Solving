#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

char s[11];
long long dis,n,i,j,k,l,t;
int main(int argc, char *argv[]) 
{
  cin>>n;
  for(t=1;t<=n;t++)
  {
     dis=0;
     cin>>s;
     l=strlen(s);
     for(i=0;i<l-1;i++)
     {
        if((s[i]=='H' && s[i+1]=='P') || (s[i]=='P' && s[i+1]=='H'))        dis+=103;
        else if((s[i]=='H' && s[i+1]=='S') || (s[i]=='S' && s[i+1]=='H'))   dis+=329;
        else if((s[i]=='H' && s[i+1]=='K') || (s[i]=='K' && s[i+1]=='H'))   dis+=466;
        else if((s[i]=='H' && s[i+1]=='T') || (s[i]=='T' && s[i+1]=='H'))   dis+=148;
        else if((s[i]=='P' && s[i+1]=='K') || (s[i]=='K' && s[i+1]=='P'))   dis+=577;
        else if((s[i]=='T' && s[i+1]=='P') || (s[i]=='P' && s[i+1]=='T'))   dis+=260;
        else if((s[i]=='S' && s[i+1]=='P') || (s[i]=='P' && s[i+1]=='S'))   dis+=408;
        else if((s[i]=='S' && s[i+1]=='K') || (s[i]=='K' && s[i+1]=='S'))   dis+=287;
        else if((s[i]=='S' && s[i+1]=='T') || (s[i]=='T' && s[i+1]=='S'))   dis+=226;
        else if((s[i]=='K' && s[i+1]=='T') || (s[i]=='T' && s[i+1]=='K'))   dis+=312;
     }
     if(s[0]=='H')        dis = dis;
     else if(s[0]=='P')   dis+=103;
     else if(s[0]=='S')   dis+=329;
     else if(s[0]=='K')   dis+=466;
     else if(s[0]=='T')   dis+=148;
  
     if(s[l-1]=='H')   dis=dis;
     else if(s[l-1]=='P')   dis+=103;
     else if(s[l-1]=='S')   dis+=329;
     else if(s[l-1]=='K')   dis+=466;
     else if(s[l-1]=='T')   dis+=148;

     cout<<"Case "<<t<<": "<<dis<<endl;
  }

  return 0;
}