#include <stdio.h>
#include <string.h>

char W[5][5],O[5][5],R[5][5],B[5][5],G[5][5],Y[5][5];
char op[50000];

char Wup[5],Wdir[5],Wesq[5],Wdown[5];
char Oup[5],Odir[5],Oesq[5],Odown[5];
char Rup[5],Rdir[5],Resq[5],Rdown[5];
char Bup[5],Bdir[5],Besq[5],Bdown[5];
char Gup[5],Gdir[5],Gesq[5],Gdown[5];
char Yup[5],Ydir[5],Yesq[5],Ydown[5];
  
int readdata(){
  
  int i;
  char temp[5];
  
  for(i=0;i<3;i++){  scanf("%s",temp); W[0][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); O[0][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); R[0][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); B[0][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); G[0][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); Y[0][i] = temp[0]; }
  
  for(i=0;i<3;i++){  scanf("%s",temp); W[1][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); O[1][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); R[1][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); B[1][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); G[1][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); Y[1][i] = temp[0]; }
  
  for(i=0;i<3;i++){  scanf("%s",temp); W[2][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); O[2][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); R[2][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); B[2][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); G[2][i] = temp[0]; }
  for(i=0;i<3;i++){  scanf("%s",temp); Y[2][i] = temp[0]; }
  
  scanf("%s",op);
  return 1;
}

int altern(){
  int i;
  for(i=0;i<3;i++) Wup[i] = W[0][i];
  for(i=0;i<3;i++) Wdir[i] = W[i][2];
  for(i=0;i<3;i++) Wdown[i] = W[2][i];
  for(i=0;i<3;i++) Wesq[i] = W[i][0];
  
  for(i=0;i<3;i++) Oup[i] = O[0][i];
  for(i=0;i<3;i++) Odir[i] = O[i][2];
  for(i=0;i<3;i++) Odown[i] = O[2][i];
  for(i=0;i<3;i++) Oesq[i] = O[i][0];
  
  for(i=0;i<3;i++) Rup[i] = R[0][i];
  for(i=0;i<3;i++) Rdir[i] = R[i][2];
  for(i=0;i<3;i++) Rdown[i] = R[2][i];
  for(i=0;i<3;i++) Resq[i] = R[i][0];
  
  for(i=0;i<3;i++) Bup[i] = B[0][i];
  for(i=0;i<3;i++) Bdir[i] = B[i][2];
  for(i=0;i<3;i++) Bdown[i] = B[2][i];
  for(i=0;i<3;i++) Besq[i] = B[i][0];
  
  for(i=0;i<3;i++) Gup[i] = G[0][i];
  for(i=0;i<3;i++) Gdir[i] = G[i][2];
  for(i=0;i<3;i++) Gdown[i] = G[2][i];
  for(i=0;i<3;i++) Gesq[i] = G[i][0];
  
  for(i=0;i<3;i++) Yup[i] = Y[0][i];
  for(i=0;i<3;i++) Ydir[i] = Y[i][2];
  for(i=0;i<3;i++) Ydown[i] = Y[2][i];
  for(i=0;i<3;i++) Yesq[i] = Y[i][0];
  
  return 0;    
}

int rev(char f){
  
  int i;

  char latup[5],latdir[5],latesq[5],latdown[5];
  altern();
  
  if(f == 'W'){
      
      for(i=0;i<3;i++) W[0][i] = Wesq[2-i];
      for(i=0;i<3;i++) W[i][2] = Wup[i];
      for(i=0;i<3;i++) W[2][i] = Wdir[2-i];
      for(i=0;i<3;i++) W[i][0] = Wdown[i];
      
      for(i=0;i<3;i++) latup[i] = G[i][0];
      for(i=0;i<3;i++) latdir[i] = O[i][0];
      for(i=0;i<3;i++) latdown[i] = R[2-i][0];
      for(i=0;i<3;i++) latesq[i] = B[2-i][0];
      
      for(i=0;i<3;i++) G[i][0] = latesq[2-i];
      for(i=0;i<3;i++) O[i][0] = latup[i];
      for(i=0;i<3;i++) R[i][0] = latdir[i];
      for(i=0;i<3;i++) B[i][0] = latdown[2-i];

  }
  else if(f == 'O'){
      
      for(i=0;i<3;i++) O[0][i] = Oesq[2-i];
      for(i=0;i<3;i++) O[i][2] = Oup[i];
      for(i=0;i<3;i++) O[2][i] = Odir[2-i];
      for(i=0;i<3;i++) O[i][0] = Odown[i];
      
      for(i=0;i<3;i++) latup[i] = G[2][i];
      for(i=0;i<3;i++) latdir[i] = Y[2][i];
      for(i=0;i<3;i++) latdown[i] = R[0][i];
      for(i=0;i<3;i++) latesq[i] = W[i][2];
      
      for(i=0;i<3;i++) G[2][i] = latesq[2-i];
      for(i=0;i<3;i++) Y[2][i] = latup[i];
      for(i=0;i<3;i++) R[0][i] = latdir[2-i];
      for(i=0;i<3;i++) W[i][2] = latdown[i];

  }
  else if(f == 'R'){
      
      for(i=0;i<3;i++) R[0][i] = Resq[2-i];
      for(i=0;i<3;i++) R[i][2] = Rup[i];
      for(i=0;i<3;i++) R[2][i] = Rdir[2-i];
      for(i=0;i<3;i++) R[i][0] = Rdown[i];
      
      for(i=0;i<3;i++) latup[i] = O[2][i];
      for(i=0;i<3;i++) latdir[i] = Y[2-i][2];
      for(i=0;i<3;i++) latdown[i] = B[0][i];
      for(i=0;i<3;i++) latesq[i] = W[2][2-i];
      
      for(i=0;i<3;i++) O[2][i] = latesq[2-i];
      for(i=0;i<3;i++) Y[2-i][2] = latup[i];
      for(i=0;i<3;i++) B[0][i] = latdir[2-i];
      for(i=0;i<3;i++) W[2][2-i] = latdown[i];

  }
  else if(f=='B'){
      
      for(i=0;i<3;i++) B[0][i] = Besq[2-i];
      for(i=0;i<3;i++) B[i][2] = Bup[i];
      for(i=0;i<3;i++) B[2][i] = Bdir[2-i];
      for(i=0;i<3;i++) B[i][0] = Bdown[i];
      
      for(i=0;i<3;i++) latup[i] = R[2][i];
      for(i=0;i<3;i++) latdir[i] = Y[0][2-i];
      for(i=0;i<3;i++) latdown[i] = G[0][i];
      for(i=0;i<3;i++) latesq[i] = W[2-i][0];
      
      for(i=0;i<3;i++) R[2][i] = latesq[2-i];
      for(i=0;i<3;i++) Y[0][2-i] = latup[i];
      for(i=0;i<3;i++) G[0][i] = latdir[2-i];
      for(i=0;i<3;i++) W[2-i][0] = latdown[i];
      
  }
  else if(f == 'G'){
      
      for(i=0;i<3;i++) G[0][i] = Gesq[2-i];
      for(i=0;i<3;i++) G[i][2] = Gup[i];
      for(i=0;i<3;i++) G[2][i] = Gdir[2-i];
      for(i=0;i<3;i++) G[i][0] = Gdown[i];
      
      for(i=0;i<3;i++) latup[i] = B[2][i];
      for(i=0;i<3;i++) latdir[i] = Y[i][0];
      for(i=0;i<3;i++) latdown[i] = O[0][i];
      for(i=0;i<3;i++) latesq[i] = W[0][i];
      
      for(i=0;i<3;i++) B[2][i] = latesq[2-i];
      for(i=0;i<3;i++) Y[i][0] = latup[i];
      for(i=0;i<3;i++) O[0][i] = latdir[2-i];
      for(i=0;i<3;i++) W[0][i] = latdown[i];
      
  }
  else if(f == 'Y'){
      
      for(i=0;i<3;i++) Y[0][i] = Yesq[2-i];
      for(i=0;i<3;i++) Y[i][2] = Yup[i];
      for(i=0;i<3;i++) Y[2][i] = Ydir[2-i];
      for(i=0;i<3;i++) Y[i][0] = Ydown[i];
      
      for(i=0;i<3;i++) latup[i] = B[2-i][2];
      for(i=0;i<3;i++) latdir[i] = R[2-i][2];
      for(i=0;i<3;i++) latdown[i] = O[i][2];
      for(i=0;i<3;i++) latesq[i] = G[i][2];
      
      for(i=0;i<3;i++) G[i][2] = latdown[i];
      for(i=0;i<3;i++) O[i][2] = latdir[2-i];
      for(i=0;i<3;i++) R[i][2] = latup[2-i];
      for(i=0;i<3;i++) B[i][2] = latesq[i];
      
  }
  
  return 0;      
}

int print(){
  int i;
  
  for(i=0;i<3;i++) printf("%c ",W[0][i]);
  for(i=0;i<3;i++) printf("%c ",O[0][i]);
  for(i=0;i<3;i++) printf("%c ",R[0][i]);
  for(i=0;i<3;i++) printf("%c ",B[0][i]);
  for(i=0;i<3;i++) printf("%c ",G[0][i]);
  for(i=0;i<3;i++){
      if( i > 0 )printf(" ");
      printf("%c",Y[0][i]);
  }
  
  printf("\n");
  
  for(i=0;i<3;i++) printf("%c ",W[1][i]);
  for(i=0;i<3;i++) printf("%c ",O[1][i]);
  for(i=0;i<3;i++) printf("%c ",R[1][i]);
  for(i=0;i<3;i++) printf("%c ",B[1][i]);
  for(i=0;i<3;i++) printf("%c ",G[1][i]);
  for(i=0;i<3;i++){
      if( i > 0 )printf(" ");
      printf("%c",Y[1][i]);
  }
  
  printf("\n");
  
  for(i=0;i<3;i++) printf("%c ",W[2][i]);
  for(i=0;i<3;i++) printf("%c ",O[2][i]);
  for(i=0;i<3;i++) printf("%c ",R[2][i]);
  for(i=0;i<3;i++) printf("%c ",B[2][i]);
  for(i=0;i<3;i++) printf("%c ",G[2][i]);
  for(i=0;i<3;i++){
      if( i > 0 )printf(" ");
      printf("%c",Y[2][i]);
  }
  
  printf("\n");
  for(i=0;i<35;i++) printf("=");
  printf("\n");
  return 0;
}
int process(){
  
  int tam = strlen(op);
  int i;
  
  for(i=0;i<tam;i++)  rev(op[i]);

  print();
  return 0;
}

int main(){
  
  int tests;
  scanf("%d",&tests);
  while( tests-- ){
      readdata();
      process();
  }
  return 0;
}