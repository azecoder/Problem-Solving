#include <cstdlib>
#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
int a[210][210],n,m,x,y,say,k;
string s;
int main(int argc, char *argv[])
{
   queue<int > st;

   cin>>n>>m;
   for(int i=0;i<n;i++){
       cin>>s;
       for(int j=0;j<m;j++)
           if(s[j]=='#')
               a[i][j]=1;
   }
   k=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
           if(a[i][j]){
               st.push(i);
               st.push(j);
               k=1;
               break;
               }
       if(k)break;
   }


   while(!st.empty()){
       say++;
       k=0;
       while(!st.empty()){
           x=st.front();
           st.pop();
           y=st.front();
           st.pop();
           if(a[x][y]){
               a[x][y]=0;

               if(a[x+1][y] && x+1<n){
                   st.push(x+1);
                   st.push(y);

               }
               if(a[x][y+1] && y+1<m){
                   st.push(x);
                   st.push(y+1);

               }

               if(x-1>=0 && a[x-1][y] ){
                   st.push(x-1);
                   st.push(y);

               }
               if(y-1>=0 && a[x][y-1] ){
                   st.push(x);
                   st.push(y-1);

               }
           }

       }

       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++)
               if(a[i][j]){
                   k=1;
                   st.push(i);
                   st.push(j);
                   break;
               }
           if(k)break;
       }
       if(!k)break;
   }

   cout<<say<<endl;
 
   return EXIT_SUCCESS;
} 