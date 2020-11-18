#include <bits/stdc++.h>

#define rep(a, b, c) for(int (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;




#define MAX 110

int n, m;
int a[MAX], temp[MAX];


int main(void)
{

    scanf("%d %d",&n,&m);

    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    for(int q = 0; q < m; q++) {

        int i, j, k;

        scanf("%d %d %d",&i,&j,&k);

        int len = j - i + 1;

        memcpy(temp,a+i-1,len*sizeof(int));

        sort(temp,temp+len);

        printf("%d\n",temp[k-1]);

    }

    return 0;

}


