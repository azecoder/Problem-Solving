#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359

vector<int> cubes;

int minCubes(int length, int width, int height)

{

    long long done = 0;

    int res = 0;

    for (int i = cubes.size() - 1; i >= 0; i--)

    {

        int len = 1 << i;

        int amount = (length / len) * (width / len) * (height / len);

        amount -= done;

        if (amount > cubes[i]) amount = cubes[i];

        done = (done + amount) * 8;

        res += amount;

    }

    if (done < 8LL * length * width * height) return -1;

    return res;

}

int length, width, height, k;

int main()
{

    while(scanf("%d %d %d %d",&length,&width,&height,&k) == 4)

    {

        cubes.resize(k);

        for(int i = 0; i < k; i++) scanf("%d",&cubes[i]);

        int res = minCubes(length,width,height);

        printf("%d\n",res);

    }

    return 0;

}


