#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef long double ld;



#define MAX 100010

int mas[MAX], Id[MAX];


int Repr(int n)
{

    if (n == mas[n]) return n;

    return mas[n] = Repr(mas[n]);

}

int Union(int x,int y)
{

    int x1 = Repr(x),y1 = Repr(y);

    mas[x1] = y1;

    return (x1 != y1);

}



int n;

int main(void)
{

    while(scanf("%d\n",&n) == 1)
    {

        for(int i = 1; i < MAX; i++) mas[i] = i, Id[i] = i;

        int MaxID = n + 1;

        int n1 = 0, n2 = 0;
        char c;

        while(scanf("%c",&c), c != 'e')
        {

            if (c == 'c')
            {

                int i, j;
                scanf("%d %d\n",&i,&j);

                Union(Id[i],Id[j]);

            }

            if (c == 'd')
            {

                int i;
                scanf("%d\n",&i);

                Id[i] = MaxID++;

            }

            if (c == 'q')
            {

                int i, j;
                scanf("%d %d\n",&i,&j);

                if (Repr(Id[i]) == Repr(Id[j])) n1++;
                else n2++;

            }

        }

        printf("%d , %d\n",n1,n2);

    }

    return 0;

}


