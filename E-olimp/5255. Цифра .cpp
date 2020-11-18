#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100001

int main(int argc, char *argv[])
{
  char a[MAX];
  int b[MAX],max,numb,max1;
 
  gets(a);
 
  max = a[0];
  for(int i = 0; i < strlen(a); i ++)
  {
      if(a[i] > max)
      max = a[i];
     
      numb = a[i]-48;
      b[numb] ++;
  }
  
  
  
  max1 = 0;
  for(int i = 0; i <= (max-48); i ++)
     if(b[i] > max1)
        max1 = b[i];
  
  for(int i = 0; i <= (max-48); i ++)
     if(b[i] == max1)
     {
         cout << i << endl;
         break;
     }

 return EXIT_SUCCESS;
}