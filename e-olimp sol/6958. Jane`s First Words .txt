#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

char s[25],a[15];
int t,i,j,k,l;
int main(int argc, char *argv[]) 
{
  while(scanf("%s", s)!=EOF)
  {
     k=strlen(s);
     if(k>=5 && s[k-1]=='y' && s[k-2]=='d' && s[k-3]=='d')
     {
        t=0;
        if(s[0]!='d')  t=1;
        for(i=1;i<k-3;i++)
        {
           if(s[i]!='a')
           {
             t=1;  break;
           }
        }
        if(t==0)  cout<<"She called me!!!"<<endl;
        else      cout<<"Cooing"<<endl;
     }
     else if(k>=5 && s[k-1]=='i' && s[k-2]=='d' && s[k-3]=='d')
     {
        t=0;
        if(s[0]!='d')   t=1;
        for(i=1;i<k-3;i++)
        {
           if(s[i]!='a')
           {
              t=1;  break;
           }
        }
        if(t==0)  cout<<"She called me!!!"<<endl;
        else      cout<<"Cooing"<<endl;
     }
     else if(k>=5 && s[k-1]=='i' && s[k-2]=='d')
     {
        t=0;
        if(s[0]!='d')   t=1;
        for(i=1;i<k-2;i++)
        {
           if(s[i]!='a')
           {
              t=1;  break;
           }
        }
        if(t==0)  cout<<"She called me!!!"<<endl;
        else      cout<<"Cooing"<<endl;
     }   
     else if(k>=5 && s[k-1]=='y' && s[k-2]=='d')
     {
        t=0;
        if(s[0]!='d') t=1;
        for(i=1;i<k-2;i++)
        {
           if(s[i]!='a')
           {
              t=1;  break;
           }   
        }
        if(t==0)  cout<<"She called me!!!"<<endl;
        else      cout<<"Cooing"<<endl;
     }
     else if(k==4 && s[k-1]=='i' && s[k-2]=='d' && s[k-3]=='a' && s[k-4]=='d')
        cout<<"She called me!!!"<<endl;  
     else if(k==4 && s[k-1]=='y' && s[k-2]=='d' && s[k-3]=='a' && s[k-4]=='d')
        cout<<"She called me!!!"<<endl;
     else  cout<<"Cooing"<<endl;
  }

 return 0;
}