#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int a,b,i,x,y,z,flag=0;
 scanf("%d%d",&a,&b);

 for(i=a; i<=b; i++)
 {
     x = i/100;
     y = i%100/10;
     z = i%10;
     if(x!=y && x!=z && y!=z)
     {
          printf("%d\n",i);
          flag=1;
     }
 }
 if(flag==0) cout << endl;


 return EXIT_SUCCESS;
}