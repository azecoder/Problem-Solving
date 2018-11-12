#include <cstdlib>
#include <iostream>

int p[10][10],b[10][10];
int o,m;
using namespace std;
int chess(int x, int y, int dl, int dk){

   int q, r;
   q=x+dl;r=y+dk;

   o=dl;
   m=dk;
  while(q>=1 && q<9 && r<9 && r>=1)
  {
       if(b[q][r]==1)break;
       p[q][r]=1;
       q=q+o;
      r=r+m;
    }

}

struct chess{

   int i,j;
}v,t,f;
int main(int argc, char *argv[])
{
    char a[15],c;

   gets(a);


   for(int l=0;l<11;l++){
       c=a[l];
       if(c==81){
           v.j=a[l+1]-96;
           v.i=a[l+2]-48;}
       if(c==82){
           t.j=a[l+1]-96;
           t.i=a[l+2]-48;}
       if(c==66){
           f.j=a[l+1]-96;
           f.i=a[l+2]-48;}

   }

   for(int l=1;l<9;l++)
       for(int k=1;k<9;k++){
           if(l==v.i && k==v.j){
           b[v.i][v.j]=1;continue;}
           if(l==f.i && k==f.j){
           b[f.i][f.j]=1;continue;}
           if(l==t.i && k==t.j){
           b[t.i][t.j]=1;continue;}
           b[l][k]=0;
       }

   for(int l=-1;l<=1;l++)
       for(int k=-1;k<=1;k++){
           if(l==0 && k==0) continue;
               chess(v.i,v.j,l,k);}

  for(int l=-1;l<=1;l++)
       for(int k=-1;k<=1;k++){
           if(l==0 || k==0) continue;
               chess(f.i,f.j,l,k);}
   for(int l=-1;l<=1;l++)
       for(int k=-1;k<=1;k++){
           if(l==0 && k==0) continue;
           if(l==0 || k==0)
               chess(t.i,t.j,l,k);}
             int g=0;
   for(int l=1;l<9;l++)
      for(int k=1;k<9;k++)
         if(p[l][k]==1)
           g++;

               cout<<g<<"\n";
   
   return EXIT_SUCCESS;
} 