#include <stdio.h>

int x,y,n,i;
int cnt1,cnt2,cnt3,cnt4,cntaxis;

int main()
{
 scanf("%d", &n);
 for(i = 0; i < n; i ++)
 {
     scanf("%d%d", &x, &y);
     if(x == 0 || y == 0)   cntaxis++;
     else if(x>0 && y>0)    cnt1++;
     else if(x>0 && y<0)    cnt4++;
     else if(x<0 && y>0)    cnt2++;
     else if(x<0 && y<0)    cnt3++;
 }
 printf("Q1: %d\n",cnt1);
 printf("Q2: %d\n",cnt2);
 printf("Q3: %d\n",cnt3);
 printf("Q4: %d\n",cnt4);
 printf("AXIS: %d\n",cntaxis);


 return 0;
}