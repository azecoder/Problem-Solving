import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       char[][][]arr=new char[10][3][2];
       for(int i=0;i<10;i++){
          if(i!=9 &&i!=0){
              arr[i][0][0]='*';
          }else{
              arr[i][0][0]='.';
          }
          if(i!=1 &&i!=2&&i!=5 &&i!=8){
              arr[i][0][1]='*';
          }else{
              arr[i][0][1]='.';
          }
          if(i!=1 &&i!=3&&i!=4 &&i!=5){
              arr[i][1][0]='*';
          }else{
              arr[i][1][0]='.';
          }
          if(i!=1 &&i!=2 &&i!=3&&i!=6 &&i!=9){
              arr[i][1][1]='*';
          }else{
              arr[i][1][1]='.';
          }
          arr[i][2][0]='.';
          arr[i][2][1]='.';
       }
       
       StringBuffer sb = new StringBuffer("");
       String m = "";
       while (true) {
           int n =Integer.parseInt(br.readLine());
           if (n==0) {
               break;
           }
           char tempC=br.readLine().charAt(0);
           if(tempC=='S'){
               sb.append(encode(br.readLine(),arr));
           }else{
               char[][][]mes=new char[n][3][2];
               for (int j = 0; j < 3; j++) {
                   String temp=br.readLine();
                   for(int i=0,num=0;i<temp.length();num++){
                       if(i>0)
                           i++;
                       for (int z = 0; z < 2; z++,i++) { 
                           mes[num][j][z]=temp.charAt(i);
                       }
                  }
               }
               sb.append(decode(mes, arr));
           }
       }
       System.out.print(sb);
   }
   
   static String encode(String x,char[][][]arr){
       int[]arrN=new int[x.length()];
       for(int i=0;i<x.length();i++){
           arrN[i]=x.charAt(i)-48;
       }
       StringBuilder sb=new StringBuilder();
       for(int j=0;j<3;j++){
           for(int i=0;i<arrN.length;i++){
               if(i>0)
                   sb.append(" ");
               for(int z=0;z<2;z++){
                  sb.append(arr[arrN[i]][j][z]);
               }
           }
           sb.append("\n");
       }
       return sb.toString();
   }
   
   static String decode(char[][][] x, char[][][] arr) {
       StringBuilder sb = new StringBuilder();
       for (int ind = 0; ind < x.length; ind++) {
           int num = -1;
           for (int i = 0; i < 10; i++) {
               int counter = 0;
               for (int j = 0; j < 3; j++) {
                   for (int z = 0; z < 2; z++) {
                       if (arr[i][j][z] == x[ind][j][z]) {
                           counter++;
                           if (counter == 6) {
                               num = i;
                               break;
                           }
                       }
                   }
                   if (counter == 6) {
                       break;
                   }
               }
               if (counter == 6) {
                   break;
               }

           }
           sb.append(num);
       }
       sb.append("\n");
       return sb.toString();
   }
}