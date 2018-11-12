#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int h1,m1,s1;
     scanf("%d %d %d",&h1,&m1,&s1);

int h2,m2,s2;
     scanf("%d %d %d",&h2,&m2,&s2);

int saat,h,m,s;
     saat=(h2*60*60+m2*60+s2)-(h1*60*60+m1*60+s1);
     h=saat/3600;
     m=saat%3600/60;
     s=saat%60;
     
     printf("%d %d %d\n",h,m,s);
     
   return 0;
}