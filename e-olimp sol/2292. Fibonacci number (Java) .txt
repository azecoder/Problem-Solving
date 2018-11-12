import java.util.*;
import java.io.*;
import java.math.*;
public class Main {
 static StringTokenizer st;
 static BufferedReader scan;
 static PrintWriter out;
 public static void main(String[] args)throws IOException{
   scan = new BufferedReader(new InputStreamReader(System.in));
   out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
   BigInteger[] f = new BigInteger[10001];
   f[1] = BigInteger.ONE; f[2] = BigInteger.ONE;
   for(int i = 3; i <= 10000; i++)f[i] = f[i - 1].add(f[i - 2]);
   int n = nextInt();
   for(int i = 0; i < n; i++){
       int x = nextInt();
       out.println(f[x]);
   }
   scan.close();
   out.close();
 }
 private static BigInteger nextBigInteger() throws IOException {
     return new BigInteger(next());
 }
 private static long nextLong() throws IOException {
     return Long.parseLong(next());
 }
 private static int nextInt() throws IOException {
     return Integer.parseInt(next());
 }
 private static String next() throws  IOException {
     while(st == null || !st.hasMoreTokens()){
         st = new StringTokenizer(scan.readLine());
     }
     return st.nextToken();
 }
}