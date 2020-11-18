import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringBuilder sb = new StringBuilder();
       String m="";
       while((m=br.readLine())!=null){
           long val=Long.parseLong(m);
           long n =(long) Math.ceil((Math.ceil(Math.sqrt(8*val+1))-1)/2) ;
           long upbound= n*(n+1)/2;
           sb.append(String.format("%d/%d\n",upbound-val+1,(n+val-upbound)));
       }
       System.out.print(sb);
   }
}