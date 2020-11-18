#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[5];
using namespace std;
int a,b,c,n,m,i;
int main(int argc, char *argv[]) 
{   
   while(cin>>a>>s>>b)
   {i++;
       if(strcmp(s,"E")==0)        break;
       cout<<"Case "<<i<<": ";
  
       if (strlen(s)==2 && s[0]=='=' && s[1]=='=')
       {   
           if(a==b)   cout<<"true"<<endl;
           else       cout<<"false"<<endl;
       }   
       else if(strlen(s)==2 && s[0]=='!' && s[1]=='=')
       {   
           if(a!=b)   cout<<"true"<<endl;
           else       cout<<"false"<<endl;
       }   
       else if(strlen(s)==2 && s[0]=='>' && s[1]=='=')
       {   
           if(a>b || a==b)   cout<<"true"<<endl;
           else              cout<<"false"<<endl;
       }  
       else if(strlen(s)==2 && s[0]=='<' && s[1]=='=')
       {   
           if(a<b || a==b)   cout<<"true"<<endl;
           else              cout<<"false"<<endl;
       }   
       else if(strlen(s)==1 && s[0]=='>')
       {   
           if(a>b)   cout<<"true"<<endl;
           else      cout<<"false"<<endl;
       }   
       else if(strlen(s)==1 && s[0]=='<')
       {   
           if(a<b)   cout<<"true"<<endl;
           else      cout<<"false"<<endl;
       }
   } 
  
   return 0;
}