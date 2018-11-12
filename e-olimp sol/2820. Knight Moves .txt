#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<utility>
#include<cmath>
#include<climits>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

#define unsigned long long int ULL;
#define long long int LL;
#define pb push_back
#define mp make_pair

struct Z{
       int x;
       int y;
};

string s1,s2;
int cost[10][10];
bool mark[10][10];
int Dx[]={-2,-1, 1, 2, 2,1,-1,-2};
int Dy[]={-1,-2,-2,-1, 1,2, 2, 1};

void bfs(int sx,int sy,int dx,int dy){
       queue<Z>Q;
       Z z;
       z.x=sx;
       z.y=sy;
       Q.push(z);
       cost[sx][sy]=0;
       int X,Y;
       memset(mark,false,sizeof mark);
       Z r;
       while(!Q.empty()){
               z=Q.front();
               Q.pop();
               if(z.x==dx && z.y==dy){
                       cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[z.x][z.y]<<" knight moves.\n";
                       return ;
               }
               for(int i=0;i<8;i++){
                       X=z.x+Dx[i];
                       Y=z.y+Dy[i];
                       if(  X>=1 && X<=8 && Y>=1 && Y<=8 && !mark[X][Y]){
                               mark[X][Y]=true;
                               cost[X][Y]=cost[z.x][z.y]+1;
                               r.x=X;
                               r.y=Y;
                               Q.push(r);

                       }
               }
       }
}

int main(){
       int dx,dy,sx,sy;
       while(cin>>s1>>s2){
               sx=s1[0]-96;
               sy=s1[1]-'0';

               dx=s2[0]-96;
               dy=s2[1]-'0';
               bfs(sx,sy,dx,dy);
       }
       return 0;
}