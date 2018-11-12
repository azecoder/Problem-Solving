import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Main {
  
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringBuffer sb = new StringBuffer("");
       int[]arr=sievePrime(1000*100);
       while(true){
           String str=br.readLine();
           if(str.equals("0")){
               break;
           }
           for(int i=arr.length-1;i>-1;i--){
               if((arr[i]+"").length()<str.length()){
               if(findPattern (arr[i]+"",str)){
                   sb.append(arr[i]).append("\n");
                   break;
               }
               }
           }
       }
       System.out.print(sb);
   }
  
    static boolean findPattern(String Pattern,String str){
       int count=0;
       for(int i=0,j=0;i<str.length();i++){
           if(Pattern.charAt(j)==str.charAt(i)){
               count++;
               j++;
           }else{
               j=0;
               count=0;
           }
           if(count==Pattern.length()){
               return true;
           }
       }
       return false;
   }
    static int[] sievePrime(int x) {
       boolean[] notPrime = new boolean[x + 1];
       notPrime[0] = true;
       notPrime[1] = true;
       for (int i = 2; i * i < x + 1; i++) {
           if (!notPrime[i]) {
               for (int j = i; i * j < x + 1; j++) {
                   notPrime[i * j] = true;
               }
           }
       }
       LinkedList<Integer> list=new LinkedList<Integer>();
       for (int i = 2;i < x; i++){
           if(!notPrime[i])
               list.add(i);
       }
       int arr[]=new int[list.size()];
       for (int i = 0;i < arr.length; i++){
           arr[i]=list.get(i);
       }
       return arr;
   }
}