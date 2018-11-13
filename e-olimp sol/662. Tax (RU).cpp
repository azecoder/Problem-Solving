#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   char a[10000];
   int i,j,h,s,s1,p=0,m;
   gets(a);
   h=strlen(a);
   m=h;
   if(a[h-1]=='0' &&a[h-2]=='0'){
      for(i=0;i<h-3;i++)
          cout<<a[i];
      cout<<a[h-3]<<"\n";
   }
   if(a[h-1]!='0'){
      int h1,h2,k=0,f,c1,c2,c[10001],l,p1=0,p2=0,o;
      p1=0;p2=0;
      p1=h-3;
      h=1;
      l=0;
      k=0;

      for(i=h-1;i>=0;i--){
         c1=a[i+p1]-48;
         c2=1;
         f=c1+c2+k;
         if(f>=10 && f<=19){
             c[l]=f-10;
             k=1;
        }
        else{
            k=0;
            c[l]=f;
        }
        l++;
    }

o=-1;
      h=1;
      p=m-3;
      o=0;

  for(i=p-1;i>=0;i--){
      if(o==0){
 f=a[i]-48+k;
  if(f>=10){
 c[l]=f-10;
 k=1;
}
else{
k=0;
c[l]=f;
}
l++;
}
}
if(k==1)
c[l++]=1;

for(i=l-1;i>0;i--)
cout<<c[i];
cout<<c[0]<<"\n";




}

  
   return EXIT_SUCCESS;
}