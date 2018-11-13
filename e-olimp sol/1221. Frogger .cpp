#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#define sag 1
#define sol -1

using namespace std;

struct Car{
     int x, y, dir;
}masin[950];

int r, c, cars;
char map[33][33];
pair <int, int > inicio, atual;
int mark[33][33][33];

void read(){
     scanf("%d%d", &r, &c);
     for(int i = 0; i < r; i++){
             scanf("%s", map[i]);
     }
}

int temCarro(int x, int y, int t){
     int pos;
     for(int i = 0; i < cars; i++){
         if(masin[i].x == x){
            if(masin[i].dir == sag){
               pos = (masin[i].y + t)%c;
            }else {
               pos = ((masin[i].y -t)%c + c)%c;
            }

            if(pos == y){
               if(masin[i].dir == sag)return 1;
               else return -1;
            }
         }
     }
     return 0;
}

int bfs(){
     int incX[4] = {-1, 0, 1, 0}, incY[4] = {0, 1, 0, -1};
     queue < pair <int, pair <int, int > > > fila;
     stack < pair <int, pair <int, int > > > pilha;
     int tempo, x, y, dir, nextX, nextY,nextTime;
     memset(mark, -1, sizeof(mark));
     mark[inicio.first][inicio.second][0] = 1;
     fila.push(make_pair(0,inicio));

     while(!fila.empty() || !pilha.empty()){
        if(pilha.empty()){
          tempo = fila.front().first;
          atual = fila.front().second;
          fila.pop();
        }else {
          tempo = pilha.top().first;
          atual = pilha.top().second;
          pilha.pop();
        }
        x = atual.first;
        y = atual.second;
       nextTime = (tempo + 1)%c;
        
        for(int i = 0; i < 4; i++){
           nextX = x + incX[i];
           nextY = y + incY[i];
           
           if(nextX == -1 || nextX == r)continue;
           if(nextY == -1)nextY = c-1;
           else if(nextY == c)nextY = 0;

           if(map[nextX][nextY] == 'T')continue;

           if(temCarro(nextX,nextY, nextTime))continue;


           if(mark[nextX][nextY][nextTime] == -1){
              mark[nextX][nextY][nextTime] = mark[x][y][tempo];
              if(map[nextX][nextY] == '.')
                  pilha.push(make_pair(nextTime, make_pair(nextX, nextY)));

              else if(map[nextX][nextY] == '-'){
                  mark[nextX][nextY][nextTime]++;
                  fila.push(make_pair(nextTime, make_pair(nextX, nextY)));
              }else if(map[nextX][nextY] == '~')
                   return mark[nextX][nextY][nextTime];
           }
        }
        dir = temCarro(x,y, nextTime);
        if(mark[x][y][nextTime] == -1 && !dir){
           mark[x][y][nextTime] = mark[x][y][tempo];
           if(map[x][y] == '.')
               pilha.push(make_pair(nextTime, make_pair(x, y)));
           else if(map[x][y] == '-'){
              mark[x][y][nextTime]++;
              fila.push(make_pair(nextTime, make_pair(x, y)));
           }
        }
     }
     return -1;
}

void process(){
  cars = 0;

  for(int i = 0; i < r; i++)
     for(int j = 0; j < c; j++){
         if(map[i][j] == '&'){
            inicio = make_pair(i, j);
            map[i][j] = '-';
         }else if(map[i][j] == '<' || map[i][j] == '>'){
            masin[cars].x = i;
            masin[cars].y = j;
            if(map[i][j] == '<')masin[cars++].dir = sol;
            else masin[cars++].dir = sag;
            map[i][j] = '-';
         }
     }

  
  if(bfs() == -1)printf("Impassable\n");
  else printf("%d\n", bfs());
}

int main () {
   
 int tests;
 scanf("%d", &tests);
 while (tests--){
         read();
         process();
 }

 return 0;
}