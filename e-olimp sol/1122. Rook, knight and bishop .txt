#include <cstdlib>
#include <iostream>
char a[1000],c;
int b[10][10];
using namespace std;
struct chess{

int i,j;
}t,at,f;
int main(int argc, char *argv[])
{

 gets(a);
 for(int l=0;l<12;l++){
    c=a[l];

         if(c==82){
             t.j=a[l+1]-96;
             t.i=9-(a[l+2]-48);}
         if(c==78){
             at.j=a[l+1]-96;
             at.i=9-(a[l+2]-48);}
         if(c==66){
             f.j=a[l+1]-96;
             f.i=9-(a[l+2]-48);}
             }
     int x,y;
     for(int l=1;l<9;l++)
         for(int k=1;k<9;k++)
             b[l][k]=0;

             b[at.i][at.j]=2;
             b[t.i][t.j]=2;
             b[f.i][f.j]=2;
      for(int l=-2;l<=2;l++)
         for(int k=-2;k<=2;k++)
             if(k*l==-2 || k*l==2){x=at.i+l ;y=at.j+k;
                 if(x<9 && y<9 && x>0 && y>0 &&b[x][y]!=2 )
                     b[x][y]=1;
             }
      for(int l=-1;l<=1;l++)
         for(int k=-1;k<=1;k++){
              if(l==0 && k==0) continue;
             if(l==0 || k==0){x=t.i+l ;y=t.j+k;
                 while(x<9 && y<9 && x>0 && y>0){
                       if(b[x][y]==2)break;
                     b[x][y]=1;
                     x+=l;y+=k;}
             }}
       for(int l=-1;l<=1;l++)
         for(int k=-1;k<=1;k++)
             if(l*k!=0){x=f.i+l ;y=f.j+k;
                 while(x<9 && y<9 && x>0 && y>0){
                       if(b[x][y]==2)break;
                     b[x][y]=1;
                     x+=l;y+=k;}
             }


     int m=0;
     for(int l=1;l<9;l++)
         for(int k=1;k<9;k++)
             if(b[l][k]==1) m++;
           cout<<m<<endl;

    return EXIT_SUCCESS;
} 