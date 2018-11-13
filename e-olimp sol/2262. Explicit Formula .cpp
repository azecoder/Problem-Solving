#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   char a[1000];
   int k=0;
   k=0;
   gets(a);
   for(int i=0;i<17;i+=2){

       for(int j=i+2;j<19;j+=2){

           //    cout<<a[i]<<" "<<a[j]<<endl;
           if(a[i]=='1'|| a[j]=='1')
               k++;
       }
   }
   for(int i=0;i<15;i+=2)
       for(int j=i+2;j<17;j+=2)
           for(int l=j+2;l<19;l+=2){

                //   cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<endl;
               if(a[i]=='1' || a[j]=='1' || a[l]=='1')
                   k++;
           }
        //   cout<<k<<endl;
   if(k%2!=0)
       cout<<"1\n";
       else
       cout<<"0\n";

   
   return EXIT_SUCCESS;
} 