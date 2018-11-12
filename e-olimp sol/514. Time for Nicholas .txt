#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h1,m1,s1,h2,m2,s2,h,m,s;
long long saat_1,saat_2,saat;

int main(int argc, char *argv[])
{
 scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);

if(h1>h2)  h2+=24;

  saat_1=h1*3600+m1*60+s1;
  saat_2=h2*3600+m2*60+s2;

  saat=saat_2-saat_1;

  h=saat/3600;
  m=(saat%3600)/60;
  s=(saat%60);


if(h<10)
 printf("0%d:",h);
else
 printf("%d:",h);

if(m<10)
 printf("0%d:",m);
else
 printf("%d:",m);

if(s<10)
 printf("0%d\n",s);
else
 printf("%d\n",s);



return 0;
}