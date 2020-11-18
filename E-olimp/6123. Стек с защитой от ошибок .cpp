#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int i,j=-1,k,l,m,n,stack[1000];
char soz,q,w;

void push(int k, int stack[])
{
 j++;
 stack[j]=k;
 cout<<"ok"<<endl;
}

void pop(int stack[])
{
 if(j==-1)
   cout<<"error"<<endl;
 else
  {
    cout<<stack[j]<<endl;
    j--;
  }
}

void size(int stack[])
{
  cout<<j+1<<endl;
}

void back(int stack[])
{
  if(j==-1)
   cout<<"error"<<endl;
  else
   cout<<stack[j]<<endl;
}

void clear(int stack[])
{
  l=j;
 for(i=0; i<=l; i++)
  j--;
 cout<<"ok"<<endl;
}


int main(int argc, char *argv[])
{
 while(1)
 {
    cin>>q>>w;

       if(q=='p' && w=='u')
         {
           cin>>q>>w;
           cin>>k;    push(k,stack);
         }

       else if(q=='p' && w=='o')
         {
            cin>>q;
            pop(stack);
         }

       else if(q=='b' && w=='a')
         {
              cin>>q>>w;
            back(stack);
         }

       else if(q=='s' && w=='i')
         {
             cin>>q>>w;
              size(stack);
         }

       else if(q=='c' && w=='l')
         {
              cin>>soz>>q>>w;
              clear(stack);
         }

       else if(q=='e' && w=='x')
         {
              cin>>q>>w;
              cout<<"bye"<<endl;
              break;
         }

 }
  return EXIT_SUCCESS;
}