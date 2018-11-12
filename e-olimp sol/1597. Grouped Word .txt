#include <bits/stdc++.h>

#define rep(a, b, c) for(ll (a) = (b); (a) <= (c); ++(a))

using namespace std;

typedef long long ll;
typedef double ld;



#define MAX 1000001

#define PI 3.14159265359



int test(string s)

{

    int i, j, k;

    for(i = 0; i < s.size(); i++)

        for(j = i + 1; j < s.size(); j++)

            if (s[i] == s[j])

                for(k = i; k <= j; k++)

                    if (s[i] != s[k]) return 0;

    return 1;

}

int join1(vector<string> &v)

{

    int i, j;

    for(i = 0; i < v.size(); i++)

        for(j = 0; j < v.size(); j++)

            if (i != j)

            {

                char c = v[i][v[i].size() - 1];

                if ((v[j][0] == c) && (v[j][v[j].size() - 1] == c))

                {

                    v[i] += v[j];

                    v.erase(v.begin() + j);

                    return 1;

                }

            }

    return 0;

}


int join2(vector<string> &v)

{

    int i, j;

    for(i = 0; i < v.size(); i++)

        for(j = 0; j < v.size(); j++)

            if (i != j)

            {

                if (v[j][0] == v[i][v[i].size() - 1])

                {

                    v[i] += v[j];

                    v.erase(v.begin() + j);

                    return 1;

                }

            }

    return 0;

}

string restore(vector<string> parts)

{

    int i;

    for(i = 0; i < parts.size(); i++)

        if (!test(parts[i])) return "IMPOSSIBLE";

    while(join1(parts));
    while(join2(parts));

    for(i = 0; i < parts.size(); i++)

        if (!test(parts[i])) return "IMPOSSIBLE";



    string s = accumulate(parts.begin(),parts.end(),string());

    if (!test(s)) return "IMPOSSIBLE";



    if (parts.size() > 1) return "MANY";

    return parts[0];

}

int n;
vector<string> parts;

int main()
{

    while(scanf("%d\n",&n) == 1)

    {

        parts.clear();

        for(int i = 0; i < n; i++)

        {

            string s;
            cin >> s;
            parts.push_back(s);

        }

        printf("%s\n",restore(parts).c_str());

    }

    return 0;

}


