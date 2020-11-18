#include <cstdlib>
#include <iostream>

using namespace std;
string s,cv;
char sv;
int a[1000],yox[11],mas[11],l,mx,cn,bax[10],ind;
int main(int argc, char *argv[])
{
   cin>>s;
   for(int i=s.size()-1;i>=0;i--){
       if(yox[s[i]-48])
           a[i]=a[i+1];
           else
           a[i]=a[i+1]+1;

       yox[s[i]-48]=1;

       }
   for(int i=0;i<s.size();){
       if(!bax[s[i]-48]){
           if(i==0  ){mx=a[i]; sv=s[i];i++;if(i==s.size())cv[l++]=sv;}else
           if( a[i]==mx ){if( sv<s[i]){sv=s[i];cn=i;}i++; while(bax[s[i]-48]){

               i++;
               }if(i==s.size())cv[l++]=sv;}
           else{
               cv[l++]=sv;
               for(int j=s.size()-1;j>cn;j--)
                   if(s[j]==sv){ind=j; break;} else ind=0;
               for(int j=cn+1;j<=ind;j++)
                   a[j]--;
               bax[s[cn]-48]=1;

               i=cn+1;
               while(bax[s[i]-48]){

               i++;
               }
               cn=i;
                 mx=a[i];
               sv=s[i];
               }
       }else i++;

   }
   for(int i=0;i<l-1;i++)
       cout<<cv[i];
       cout<<cv[l-1]<<endl;

      return 0;
}