#include <stdio.h>
#include <stdlib.h>

int h1,h2,m1,m2,l,w,k,a;

int main(int argc, char *argv[])
{

scanf("%d %d %d %d", &h1,&m1,&h2,&m2);




if(h1<=h2)
{

/*     h1>= 12 && h2>=12 olmali idi ama sen hech birinde "=" yazmamishdin..
      senin shertinde 10:30 12:40 hesablamir     */
  if(h1<=12 && h2<=12)
  {
   l=0;
     if(h1==0 && m1==0)
        l=12;

   l=l+((h2+h1+1)*(h2-h1))/2;

     if(m1<=30)
        k=1;
     else
        k=0;

     if(m2<30)
        k=k+(h2-h1)-1;
     else
        k=k+(h2-h1);

     if(m1==0)
        a=h1;

   w=l+k+a;
      printf("%d\n",w);
  }
/*     h1>= 12 && h2>=12 olmali idi ama sen hech birinde "=" yazmamishdin..
      senin shertinde 12:20 12:40 hesablamir     */
  else if(h1<=12 && h2>=12)
  {
   l=0;
     if(h1==0 && m1==0)
        l=12;

   l=l+((12+h1+1)*(12-h1))/2+((h2-12+1)*(h2-12))/2;

     if(m1<=30)
        k=1;
     else
        k=0;

     if(m2<30)
        k=k+(h2-h1)-1;
     else
        k=k+(h2-h1);

     if(m1==0)
        a=h1;

   w=l+k+a;
      printf("%d\n",w);
  }


  else if(h1>12 && h2>12)
  {
   l=((h2+h1+1-24)*(h2-h1))/2;

     if(m1<=30)
        k=1;
     else
        k=0;

     if(m2<30)
        k=k+(h2-h1)-1;
     else
        k=k+(h2-h1);

     if(m1==0)
        a=h1;

   w=l+k+a;
      printf("%d\n",w);
  }
}

else printf("0\n");

 
 return 0;
}