import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
   
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringBuffer sb = new StringBuffer("");
       int cases=Integer.parseInt(br.readLine().trim());
       for(int z=0;z<cases;z++) {
           int n=Integer.parseInt(br.readLine().trim());
           String[]str=new String[n];
           for(int j=0;j<n;j++){
               str[j]=br.readLine().trim();
           }
           Arrays.sort(str);
           boolean flag=false;
           for(int i=0;i<n-1;i++){
                  boolean oops=true;
                  for(int l=0;l<Math.min(str[i].length(), str[i+1].length());l++){
                      if(str[i].charAt(l)!=str[i+1].charAt(l)){
                          oops=false;
                          break;
                      } 
               }
               if(oops){
                      flag=true;
                      break;
                  }
           }
           if(flag){
               sb.append("NO\n");
           }else{
               sb.append("YES\n");
           }
       }
       System.out.print(sb);
   }
}
