- - - - - - - - - " C + + " - S O U R C E - C O D E - - - - - - - - - - -

#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int adjk[]={-1,0,0,0,0,1}, adji[]={0,-1,0,0,1,0}, adjj[]={0,0,-1,1,0,0};

int o, m, n;
struct node {
   char k, i, j;
   node(char _k, char _i, char _j) { k=_k; i=_i; j=_j; }
};

char g[32][32][32];
unsigned short dist[32][32][32];

int bfs(int k, int i, int j) {
   bool u[32][32][32]={0};
   queue<node> q;
   q.push(node(k, i, j));
   u[k][i][j]=1;
   while (!q.empty()) {
       node x=q.front();
       q.pop();
       if (g[x.k][x.i][x.j]=='E') return dist[x.k][x.i][x.j];
       for (int l=0;l<6;l++) {
           int ik=x.k+adjk[l], ii=x.i+adji[l], ij=x.j+adjj[l];
           if (g[ik][ii][ij]=='#'||u[ik][ii][ij]) continue;
           u[ik][ii][ij]=1;
           dist[ik][ii][ij]=dist[x.k][x.i][x.j]+1;
           q.push(node(ik, ii, ij));
       }
   }
   return -1;
}

int main(void) {
   while (1) {
       scanf("%d%d%d", &o, &m, &n);
       if (!o&&!m&&!n) break;
       memset(g, '#', sizeof(g));
       memset(dist, 0, sizeof(dist));
       int si=0, sj, sk;
       for (int k=1;k<=o;k++) {
           for (int i=1;i<=m;i++) {
               scanf("%s\n", g[k][i]+1);
               g[k][i][n+1]='#'; /* replace '\0' scanf adds, with rock */
               if (!si) {
                   for (int j=1;j<=n;j++) {
                       if (g[k][i][j]=='S') {
                           sk=k; si=i; sj=j;
                           break;
                       }
                   }
               }
           }
       }
       int time=bfs(sk, si, sj);
       if (time>=0) printf("Escaped in %d minute(s).\n", time);
       else printf("Trapped!\n");
       

   }
   
   return 0;
} 



- - - - - - - - - J A V A - S O U R C E - C O D E - - - - - - - - - - -


import java.io.*;
import java.util.*;

public class Main {
       static int l;
       static int r;
       static int c;
       public static void main(String[] args){
               Scanner scan = new Scanner(new InputStreamReader(System.in));
               l = scan.nextInt();
               r = scan.nextInt() ;
               c = scan.nextInt();
               while(l != 0)
               {
                       char[][][] map = new char[l][r][c];
                       int sx =-1,sy = -1,sz =-1, ex = -1,ey = -1,ez = -1;
                       for(int z=0;z<l;z++)
                       {
                               for(int y=0;y<r;y++)
                               {
                                       String line = scan.next();
                                       for(int x=0;x<c;x++){
                                               char ch = line.charAt(x);
                                               if(ch == 'S')
                                               {
                                                       sx = x;
                                                       sy = y;
                                                       sz = z;
                                               }
                                               else
                                                       if(ch == 'E')
                                                       {
                                                               ex = x;
                                                               ey = y;
                                                               ez = z;
                                                       }
                                               map[z][y][x]= ch;
                                       }
                               }
                       }
                       int moves = path(map , sx,sy,sz,ex,ey,ez);
                       if(moves == -1)
                               System.out.println("Trapped!");
                       else
                               System.out.println("Escaped in "+moves+" minute(s).");
                       l = scan.nextInt();
                       r = scan.nextInt() ;
                       c = scan.nextInt();
               }
       }

       private static int path(char[][][] map, int sx,int sy,int sz,int ex,int ey,int ez)
       {
               Queue<Integer> q = new LinkedList<Integer>();
               boolean[][][] v = new boolean[l][r][c];
               q.add(sx);
               q.add(sy);
               q.add(sz);
               q.add(0);
               int[] dx = {1,-1,0,0,0,0};
               int[] dy = {0,0,-1,1,0,0};
               int[] dz = {0,0,0,0,1,-1};
               while(!q.isEmpty())
               {
                       int x = q.poll() , y = q.poll() ,z = q.poll(), moves = q.poll();
                       if(x == ex && y == ey && z==ez)
                               return moves;
                       else{
                               for(int i=0; i < 6;i++)
                               {
                                       int newx = x+dx[i] , newy = y+dy[i] , newz = z+dz[i];
                                       if(newx>=0 && newx < c && newy >= 0 && newy < r && newz >= 0 && newz < l && map[newz][newy][newx] != '#' &&!v[newz][newy][newx])
                                       {
                                               q.add(newx);
                                               q.add(newy);
                                               q.add(newz);
                                               q.add(moves+1);
                                               v[newz][newy][newx] = true;
                                       }
                               }
                       }
               }
               return -1;
       }

}