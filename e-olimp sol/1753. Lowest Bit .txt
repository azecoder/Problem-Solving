#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ctype.h>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <deque>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <string.h>

using namespace std;

int k,n;
int main(int argc, char *argv[])
{
   while(scanf("%d",&n)&&n!=0)
   {
       if(n%2!=0)    printf("1\n");
       else    
       {
           if(n%2==0&&n%4!=0)            printf("2\n");
           else if(n%4==0&&n%8!=0)        printf("4\n");
           else if(n%8==0&&n%16!=0)    printf("8\n");
           else if(n%16==0&&n%32!=0)    printf("16\n");
           else if(n%32==0&&n%64!=0)    printf("32\n");
           else if(n%64==0)            printf("64\n");
       }
   
   }

return 0;
}