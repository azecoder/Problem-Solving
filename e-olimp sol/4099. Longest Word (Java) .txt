import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       char m=' ';
       StringBuilder temp=new StringBuilder("");
       String max="";
       while(true){
          m=(char) br.read();
          if((m>='a' &&m<='z')||(m>='A' &&m<='Z')){
              temp.append(m);
          }
          else if(m=='-'){
              temp.append(m);
          }else{
             if(max.length()<temp.length()) {
                 max=temp.toString();
             }
             temp=new StringBuilder("");
          }
          if(temp.toString().equals("E-N-D")){
              break;
          }
       }
       System.out.println(max.toLowerCase());
   }
}