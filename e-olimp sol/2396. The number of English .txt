#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n,a,b,c,say=0,mem;
  cin>>n;
  
  mem=n;
  while(mem!=0)
  {
      say++;    mem/=10;
  }
  
  if(say==1)
  {
      if(n==1)            cout<<"one"<<endl;
      else if(n==2)       cout<<"two"<<endl;
      else if(n==3)       cout<<"three"<<endl;
      else if(n==4)       cout<<"four"<<endl;
      else if(n==5)       cout<<"five"<<endl;
      else if(n==6)       cout<<"six"<<endl;
      else if(n==7)       cout<<"seven"<<endl;
      else if(n==8)       cout<<"eight"<<endl;
      else if(n==9)       cout<<"nine"<<endl;
  }
  
  else if (say==2 && n<=19)
  {
      a=n/10;
      b=n%10;
      
      if(b==0)            cout<<"ten"<<endl;
      else if(b==1)       cout<<"eleven"<<endl;
      else if(b==2)       cout<<"twelve"<<endl;
      else if(b==3)       cout<<"thirteen"<<endl;
      else if(b==4)       cout<<"fourteen"<<endl;
      else if(b==5)       cout<<"fifteen"<<endl;
      else if(b==6)       cout<<"sixteen"<<endl;
      else if(b==7)       cout<<"seventeen"<<endl;
      else if(b==8)       cout<<"eighteen"<<endl;
      else if(b==9)       cout<<"nineteen"<<endl;
  }   
  else if(say==2 && n>=20)
  {
      a=n/10;
      b=n%10;
      
      if(a==2)            cout<<"twenty";
      else if(a==3)       cout<<"thirty";
      else if(a==4)       cout<<"forty";
      else if(a==5)       cout<<"fifty";
      else if(a==6)       cout<<"sixty";
      else if(a==7)       cout<<"seventy";
      else if(a==8)       cout<<"eighty";
      else if(a==9)       cout<<"ninety";
      
      if(b==0)            cout<<endl;
      else if(b==1)       cout<<" one"<<endl;
      else if(b==2)       cout<<" two"<<endl;
      else if(b==3)       cout<<" three"<<endl;
      else if(b==4)       cout<<" four"<<endl;
      else if(b==5)       cout<<" five"<<endl;
      else if(b==6)       cout<<" six"<<endl;
      else if(b==7)       cout<<" seven"<<endl;
      else if(b==8)       cout<<" eight"<<endl;
      else if(b==9)       cout<<" nine"<<endl;
  }
  
  if(say==3)
  {
      a=n/100;
      b=n%100/10;
      c=n%100%10;
      
      if(a==1)            cout<<"one hundred";
      else if(a==2)       cout<<"two hundred";
      else if(a==3)       cout<<"three hundred";
      else if(a==4)       cout<<"four hundred";
      else if(a==5)       cout<<"five hundred";
      else if(a==6)       cout<<"six hundred";
      else if(a==7)       cout<<"seven hundred";
      else if(a==8)       cout<<"eight hundred";
      else if(a==9)       cout<<"nine hundred";
             
      if(b==1)
      {
          if(c==0)                cout<<" ten"<<endl;
          else if(c==1)           cout<<" eleven"<<endl;
          else if(c==2)           cout<<" twelve"<<endl;
          else if(c==3)           cout<<" thirteen"<<endl;
          else if(c==4)           cout<<" fourteen"<<endl;
          else if(c==5)           cout<<" fifteen"<<endl;
          else if(c==6)           cout<<" sixteen"<<endl;
          else if(c==7)           cout<<" seventeen"<<endl;
          else if(c==8)           cout<<" eighteen"<<endl;
          else if(c==9)           cout<<" nineteen"<<endl;
      }
      else if(b==2)       cout<<" twenty";
      else if(b==3)       cout<<" thirty";
      else if(b==4)       cout<<" forty";
      else if(b==5)       cout<<" fifty";
      else if(b==6)       cout<<" sixty";
      else if(b==7)       cout<<" seventy";
      else if(b==8)       cout<<" eighty";
      else if(b==9)       cout<<" ninety";
             
      if(c==0 && b!=1)            cout<<endl;
      else if(c==1 && b!=1)       cout<<" one"<<endl;
      else if(c==2 && b!=1)       cout<<" two"<<endl;
      else if(c==3 && b!=1)       cout<<" three"<<endl;
      else if(c==4 && b!=1)       cout<<" four"<<endl;
      else if(c==5 && b!=1)       cout<<" five"<<endl;
      else if(c==6 && b!=1)       cout<<" six"<<endl;
      else if(c==7 && b!=1)       cout<<" seven"<<endl;
      else if(c==8 && b!=1)       cout<<" eight"<<endl;
      else if(c==9 && b!=1)       cout<<" nine"<<endl;
  }
      
  return EXIT_SUCCESS;
}