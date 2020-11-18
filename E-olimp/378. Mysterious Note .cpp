#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100000], b[27];
int i,n;


int main(int argc, char *argv[])
{

gets(a);
scanf("%s", b);
n=strlen(a);

for(i=0; i<n; i++)
{
      switch(a[i])
        {
          case 'A': a[i]=b[0];  break;
          case 'B': a[i]=b[1];  break;
          case 'C': a[i]=b[2];  break;
          case 'D': a[i]=b[3];  break;
          case 'E': a[i]=b[4];  break;
          case 'F': a[i]=b[5];  break;
          case 'G': a[i]=b[6];  break;
          case 'H': a[i]=b[7];  break;
          case 'I': a[i]=b[8];  break;
          case 'J': a[i]=b[9];  break;
          case 'K': a[i]=b[10];  break;
          case 'L': a[i]=b[11];  break;
          case 'M': a[i]=b[12];  break;
          case 'N': a[i]=b[13];  break;
          case 'O': a[i]=b[14];  break;
          case 'P': a[i]=b[15];  break;
          case 'Q': a[i]=b[16];  break;
          case 'R': a[i]=b[17];  break;
          case 'S': a[i]=b[18];  break;
          case 'T': a[i]=b[19];  break;
          case 'U': a[i]=b[20];  break;
          case 'V': a[i]=b[21];  break;
          case 'W': a[i]=b[22];  break;
          case 'X': a[i]=b[23];  break;
          case 'Y': a[i]=b[24];  break;
          case 'Z': a[i]=b[25];  break;
        }
}



printf("%s", a);
printf("\n");


return 0;
}