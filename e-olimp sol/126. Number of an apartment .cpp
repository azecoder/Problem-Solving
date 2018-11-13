import java.util.*;

class Main {

   public static void main(String[] args) {
     
     Scanner input = new Scanner (System.in);
     
     long men = input.nextLong();   
     long blok = input.nextLong();   
     long mert = input.nextLong();

     long ev = input.nextLong();
     
     cal(men, blok, mert, ev);
   }

   private static void cal(long men, long blok, long mert, long ev) {
       long oneBlok = men / blok;
       long oneMert = oneBlok / mert;
       
       long ansBlok, ansMert;
       if((ev % oneBlok) > 0){
           ansBlok = (ev / oneBlok) + 1;
           if(((ev % oneBlok) % oneMert) > 0)
               ansMert = ((ev % oneBlok) / oneMert) + 1;
           else
               ansMert = (ev % oneBlok) / oneMert;
       }
       else{
           ansBlok = (ev / oneBlok);
           ansMert = oneBlok / oneMert;
       }
       System.out.println(ansBlok + " " + ansMert);
   }
}