#include <cstdlib>
#include <iostream>
#include <queue>
#include<string.h>
#include<stdio.h>

using namespace std;
queue<int > q;
int B[101][101],mi[101][101],mj[101][101];
int c[101][101];
char a[101][101],S[101][101];
int main(int argc, char *argv[])
{
   int n,fi,fj,vi,vj,x,y,si,sj;
   cin>>n;
  cin.ignore(256, '\n');
  for(int i=0;i<n;i++)
           cin.getline(a[i],n+1);


   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++){
           if(a[i][j]=='.'){
               c[i][j]=1;S[i][j]='.';}
           if(a[i][j]=='#'){ c[i][j]=0;S[i][j]='#';}
           if(a[i][j]=='@'){ c[i][j]=2; fi=i; fj=j;si=i;sj=j;S[i][j]='@';}
       }


   B[fi][fj]=1;
   q.push(fi);
   q.push(fj);
   int k=0;
   while(!q.empty()){
       fi=q.front();
       q.pop();
       fj=q.front();
       q.pop();
       vi=fi-1;
       vj=fj-2;
       if(vi>=0 && vj>=0 && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
        mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi+1;
       vj=fj-2;
       if(vi<n && vj>=0 && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
       mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi-2;
       vj=fj-1;
       if(vi>=0 && vj>=0 && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
       mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi+2;
       vj=fj-1;
       if(vi<n && vj>=0 && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
        mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi+1;
       vj=fj+2;
       if(vi<n && vj<n && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
        mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi+2;
       vj=fj+1;
       if(vi<n && vj<n && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
       mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

        vi=fi-1;
       vj=fj+2;
       if(vi>=0 && vj<n && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
        mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}

       vi=fi-2;
       vj=fj+1;
       if(vi>=0 && vj<n && !B[vi][vj] &&c[vi][vj]){B[vi][vj]=1; q.push(vi);q.push(vj);
        mi[vi][vj]=fi; mj[vi][vj]=fj;
       if(c[vi][vj]==2){x=fi;y=fj;k=1;break;}}




   }

             if(k==1){
             while(1){
                   if(mi[vi][vj]==si && mj[vi][vj]==sj)break;

                   S[vi][vj]='@';
                   int h;
                   h=vi;
                   vi=mi[h][vj];
                   vj=mj[h][vj];

               }

                 S[vi][vj]='@';
       }
         if(k==1){
            for(int i=0;i<n;i++){
               for(int j=0;j<n-1;j++)
                   printf("%c",S[i][j]);
                   printf("%c\n",S[i][n-1]);}}
           else
           cout<<"Impossible\n";


 
   return EXIT_SUCCESS;
} 