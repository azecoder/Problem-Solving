import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * @author Tabriz
 */
public class Main {


   public static void main(String[] args) {
       new Main().run();
   }
   
   void run(){
       InputReader in =  new InputReader(System.in);
      String ans  = "";
       int from = 0,tmp;
       int len = in.nextInt();
       String str=in.next();
       for(char i='z';i>='a';i--){
          tmp=str.indexOf(i, from);
         
          if(tmp!=-1){
             
              from= tmp;
              ans+=i;
          }
       }
       
       System.out.println(ans);
   }
   
   class InputReader{

       private BufferedReader reader;
       private StringTokenizer token;
       public InputReader(InputStream in) {
           reader =new BufferedReader(new InputStreamReader(in));
           token = null;
           
       }
       public String next(){
           if(token==null || !token.hasMoreTokens()){
               try {
                   token = new StringTokenizer(reader.readLine());
               } catch (IOException ex) {
                   throw  new RuntimeException();
               }
             
           }
           return token.nextToken();
        }
       public int nextInt(){
           return Integer.parseInt(next());
       }
   }
} 