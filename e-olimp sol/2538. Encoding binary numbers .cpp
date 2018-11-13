#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {

       char a[10000];
       char c,c1[10001];
       long b[10001],l=0,n;
       while(1) {
       l=0;
           cin>>a;
           if(a[0]=='0' && strlen(a)==1)break;
           n=strlen(a);
           for(int i=0;i<n;i++){
               c=a[i];
               c1[l]=c;
               while( i<n && a[i]==c ){b[l]++;i++;}
               i--;
               l++;
           }

       for(int i=0;i<l-1;i++){
           cout<<b[i]<<c1[i];b[i]=0;}
           cout<<b[l-1]<<c1[l-1];
           cout<<endl;
           b[l-1]=0;
       }
      
       return 0;   
}