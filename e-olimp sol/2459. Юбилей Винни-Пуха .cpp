#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  char a[100];
  long day,mon,year,h,k;
  gets(a);
  h=strlen(a);;
      day=a[h-2]-48+(a[h-1]-48)*10;
      mon=a[h-4]-48+(a[h-3]-48)*10;
      year=(a[h-6]-48)*1000+(a[h-7]-48)*100+(a[h-9]-48)*10+(a[h-10]-48);
  k=1;
  if(mon<13 && mon>0){
      if(mon<8 && mon%2 && (day>31 || day<=0 ))k=0;
      if(mon<8 && mon%2==0 &&( day>30 || day<=0)  )k=0;
      if(mon>=8 && mon%2==0 && ( day>31  || day<=0 ) )k=0;
      if(mon>=8 && mon%2 && (day>30 || day<=0 ) )k=0;
      if(mon==2 && year%4==0 &&( day>29 || day<=0) )k=0;
      if(mon==2 && year%4!=0 && ( day>28 ||  day<=0 ))k=0;
  }
  else
  k=0;
  if(k)cout<<"YES\n";else cout<<"NO\n";

 
 

  return EXIT_SUCCESS;
} 