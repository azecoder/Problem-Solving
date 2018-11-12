#include <stdio.h>
int a, b, c;
main()
{
scanf("%d%d%d\n", &a, &b, &c);
if (((a*a) == (b*b) + (c*c))|| ((b*b) == (a*a) + (c*c)) || ((c*c) == (b*b) + (a*a)))
printf("YES\n");
else
printf("NO\n");
return 0;
}