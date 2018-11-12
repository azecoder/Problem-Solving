#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  long long i,j,n,k=0,eded;
  string a;

  while(cin>>a)
  {
      i=0;
      eded=0;
      k++;

      while(i<a.length())
      {
          if(a[i]=='I' && a[i+1]=='V')
          {
              eded+=4;
              i+=2;
          }
          else if(a[i]=='I' && a[i+1]=='X')
          {
              eded+=9;
              i+=2;
          }
          else if(a[i]=='X' && a[i+1]=='L')
          {
              eded+=40;
              i+=2;
          }
          else if(a[i]=='X' && a[i+1]=='C')
          {
              eded+=90;
              i+=2;
          }
          else if(a[i]=='C' && a[i+1]=='D')
          {
              eded+=400;
              i+=2;
          }
          else if(a[i]=='C' && a[i+1]=='M')
          {
              eded+=900;
              i+=2;
          }
          else if(a[i]=='I')
          {
              eded+=1;
              i++;
          }
          else if(a[i]=='V')
          {
              eded+=5;
              i++;
          }
          else if(a[i]=='X')
          {
              eded+=10;
              i++;
          }
          else if(a[i]=='L')
          {
              eded+=50;
              i++;
          }
          else if(a[i]=='C')
          {
              eded+=100;
              i++;
          }
          else if(a[i]=='D')
          {
              eded+=500;
              i++;
          }
          else if(a[i]=='M')
          {
              eded+=1000;
              i++;
          }
      }

      cout<<"Case "<<k<<": "<<eded<<endl;
  }


  return EXIT_SUCCESS;
}