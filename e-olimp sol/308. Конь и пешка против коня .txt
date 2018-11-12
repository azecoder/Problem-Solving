#include <cstdlib>
#include <iostream>
char a[1000],c;
int b[10][10];
using namespace std;
struct chess{

int i,j;
}v1,at1,p,v2,at2;
int main(int argc, char *argv[])
{

 gets(a);
 for(int l=0;l<10;l++){
    c=a[l];
  //  cout<<c<<"\n";

         if(c==75){
             v1.j=a[l+1]-96;
             v1.i=9-(a[l+2]-48);}
         if(c==78){
             at1.j=a[l+1]-96;
             at1.i=9-(a[l+2]-48);}
         if(c>96 && c<105){
             p.j=a[l]-96;
             p.i=9-(a[l+1]-48);}}
        gets(a);
 for(int l=0;l<6;l++){
    c=a[l];
         if(c==75){
             v2.j=a[l+1]-96;
             v2.i=9-(a[l+2]-48);}
         if(c==78){
             at2.j=a[l+1]-96;
             at2.i=9-(a[l+2]-48);}}


     /*cout<<v1.i<<" "<<v1.j<<"\n";
     cout<<at1.i<<" "<<at1.j<<"\n";
     cout<<v2.i<<" "<<v2.j<<"\n";
     cout<<at2.i<<" "<<at2.j<<"\n";
     cout<<p.i<<" "<<p.j<<"\n";*/

     int x,y;
     for(int l=1;l<9;l++)
         for(int k=1;k<9;k++)
             b[l][k]=0;
      for(int l=-2;l<=2;l++)
         for(int k=-2;k<=2;k++)
             if(k*l==-2 || k*l==2){x=at1.i+l ;y=at1.j+k;
                 if(x<9 && y<9 && x>0 && y>0)
                     b[x][y]=1;
             }


    /* for(int l=1;l<9;l++){
         for(int k=1;k<9;k++)
             cout<<b[l][k];
             cout<<"\n";}*/

     for(int l=1;l<9;l++)
         for(int k=1;k<9;k++)
             if((l==v1.i && k==v1.j)||(l==p.i && k==p.j))
                     if(b[l][k]==1)
                         b[l][k]=0;
                         int m=0;
     for(int l=1;l<9;l++)
         for(int k=1;k<9;k++)
             if(b[l][k]==1) m++;
           cout<<m<<endl;




  return EXIT_SUCCESS;
}