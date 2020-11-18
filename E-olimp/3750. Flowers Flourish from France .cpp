#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>

#define MAX_SIZE 101;
using namespace std;

int main(int argc, char *argv[])
{
  char str[10001];
  while(1)
  {
      gets(str);
      int n = strlen(str);
     
      if(str[0] == '*') break;
     
      for(int i = 0; i < n; i++){
          if(str[i] != ' '){
              if(str[i] < 91) str[i] += 32;
          }
      }

      bool flag = true;
      for(int i = 1; i < n; i++){
          if(isalpha(str[i]) && str[i-1] == ' '){
              if(str[0] != str[i]){
                  cout << "N" << endl;
                  flag = false;
                  break;
              }
          }
      }
      if(flag == true)
          cout << "Y" << endl;
  }
  return EXIT_SUCCESS;
} 