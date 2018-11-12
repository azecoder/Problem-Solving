#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int N, l, m, k, a, b, c, x, y, z;
int  Petya, Vasya, Nikolay;
scanf("%d", &N);

l = N/3, m = N/3, k = N/3, a = l/2, c = k/2, b = m+a+c;
x = a/2, y = b/2, z = c+x+y, Vasya = z/2, Nikolay = y/2, Petya = x+Nikolay+Vasya; 
printf("%d %d %d\n", Petya, Nikolay, Vasya);

    
return 0;
}