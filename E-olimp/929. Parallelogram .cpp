#include <stdio.h>
double a, b, c, d;

int main()
{

scanf("%lf%lf%lf%lf\n", &a, &b, &c, &d);

if (( a == c && b ==d)||( a == b && c == d)||( a==d && b == c))
{
printf ("YES\n");
}
else
if (( a == c && b != d)|| (a == b && c != d) || ( a == d && b != c) || ( a != c && b == d ) || ( a != b && c == d ) || ( a != d && b == c ) || ( a != d && b != c))
{
printf ("NO\n");
}
return 0;
}