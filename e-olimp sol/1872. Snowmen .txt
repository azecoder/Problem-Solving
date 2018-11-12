#include <stdio.h>

 

struct Pair

{

  int Number;

  int Weight;

} Sman[200001];

 

int i, n, t, m;

long long sum;

 

int main(void)

{

  scanf("%d",&n); sum = 0;

  for(i = 1; i <= n; i++)

  {

    scanf("%d %d",&t,&m); 

    if (m > 0)

    {

      Sman[i].Number = t;

      Sman[i].Weight = Sman[t].Weight + m;

    }

    else Sman[i] = Sman[Sman[t].Number];

    sum += Sman[i].Weight;

  }

  printf("%lld\n",sum);

  return 0;

}




