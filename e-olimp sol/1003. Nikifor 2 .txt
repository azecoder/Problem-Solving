#include <cstdlib>
#include <iostream>

using namespace std;
long a,b,j,l,h,c[1000000],d[1000000],f,x,y;
int main(int argc, char *argv[])
{

cin>>a>>b;

if(a<b) cout<<"No solution\n";
   if(a>=b)
{


    for(int i=2;i<=a;i++){
        l=0;
      x=b;y=a;

        while(y>0){
            c[l++]=y%i;
             y/=i;

        }
       j=0;
    while(x>0){
            d[j++]=x%i;
             x/=i;

        }
        int p=0;

     int z=0;
     z=0;
        for(int y=0;y<j;y++){
             z=0;
            for(int k=p;k<l;k++){
                  p++;
                if(d[y]==c[k]){ z=1; break;}}

                if(z==0)break;}

                    if(z==1){ f=1;
                        cout<<i<<endl; break;}
    }
    if(f==0)
        cout<<"No solution\n";
}

 
  return EXIT_SUCCESS;
} 