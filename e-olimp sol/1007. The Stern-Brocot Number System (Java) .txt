import java.util.*;

public class Main {
   
   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       while(true){
               int xR=1;
               int yR=0;
               int xL=0;
               int yL=1;
               int a = input.nextInt();
               int b = input.nextInt();
               if(a==1 && b==1)    break;
               int tempX=1,tempY=1;
               while(!(a==tempX && b==tempY)){
                   if(tempX*b>tempY*a){
                       xR=tempX;
                       yR=tempY;
                       System.out.print("L");
                   }
                   else{
                       xL=tempX;
                       yL=tempY;
                       System.out.print("R");
                   }
                   tempX=xL+xR;
                   tempY=yL+yR;
               }
            System.out.println();
       }
   }
}