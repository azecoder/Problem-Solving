#include <cstdlib>
#include <iostream>
#include<vector>
using namespace std;
vector <int> A[1000]; // bu vektor qonsulari yadda saxlamg ucun lazimdir
                    // biz burda array isdifade etmek olmaz
long long D[1001];
bool    F[1001];
long long P[1001][1001];

int main(int argc, char *argv[])
{

int N,M,x,y,z,u,v,a,b[10000],l;
cin>>N>>a>>M;
for(int i=0;i<=N;i++)
    D[i]=1000000;
for(int i=1;i<=a;i++)
    cin>>b[i];

for(int i=1;i<=M;i++){
    scanf("%d%d%d",&x,&y,&z);
    A[x].push_back(y);
    A[y].push_back(x);
    P[x][y]=z;
    P[y][x]=z;
}
cin>>l;
D[l]=0;

for(int i=1;i<=N;i++){
    int mini=1000000;
    for(int j=1;j<=N;j++)
        if(!F[j]&&D[j]<mini)
        {
            mini=D[j];
            v=j;
        }
        F[v]=true;
        for(int j=0;j<A[v].size();j++){
            u=A[v][j];

            if(D[u]>D[v]+P[v][u])
                D[u]=D[v]+P[v][u];
        }
}


int k=0;
for(int i=1;i<=a;i++)
    if(D[b[i]]==1000000){k=1;break;}
if(k==1)cout<<"It is not fault of sponsor...\n";
else
    {
        cout<<"The good sponsor!\n";
        for(int i=0;i<a;i++)
            for(int j=1;j<a;j++)
                if(D[b[j]]>D[b[j+1]]){
                    x=D[b[j]];
                    D[b[j]]=D[b[j+1]];
                    D[b[j+1]]=x;
                }


        cout<<D[b[a]]<<endl;
    }



return EXIT_SUCCESS;
}