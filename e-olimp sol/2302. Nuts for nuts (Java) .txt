import java.util.*;

/**
*
* @author Student
*/
public class Main {

   /**
    * @param args the command line arguments
    */
   private int n, m, len;
   private int[][] mas;
   private LinkedList<Node> list;
   private int[][] dist;
   private  int[][] DP = new int[1<<17][21];
   public static void main(String[] args) {
       new Main().run();

   }

   void run() {
       Scanner in = new Scanner(System.in);
       String temp;


     
       while (in.hasNext()) {
           n = in.nextInt();
       m = in.nextInt();
           mas = new int[21][21];
           len = 1;
           list = new LinkedList<Node>();
         
           for (int t = 0; t < n; t++) {
               temp = in.next();
               for (int i = 0; i < m; i++) {
                 
                   if (temp.charAt(i) == '#') {
                       len++;
                       list.add( new Node(t, i,false));
                   }else if(temp.charAt(i)=='L'){
                       list.add(0, new Node(t, i,true));
                   }
               }
           }
           
           for(int i=0;i<(1<<17);i++) {
               Arrays.fill(DP[i], -1);
           }
         //  System.out.println(DP[15][1]);
           DP[1][1] = 1;
            dist = calDist(list);
           
     //    System.out.println(len);
            int ans1 = Integer.MAX_VALUE;
           for(int i=2;i<=len;i++) {
               ans1 = Math.min(dp((1<<len)-1,i)+dist[i][1], ans1);
           }
           
            System.out.println(ans1-1);


       }

   }
   
   int dp(int mask, int j){
       
       int ans=100000;
    //   System.out.println(mask+" " +j);
       if(DP[mask][j]!=-1){// System.out.println(DP[mask][j]);
           return DP[mask][j];}
       
       
       int mask1 = mask^(1<<(j-1));
     
       for(int i=1;i<=len;i++) {
           if((mask1 & (1<<(i-1)))!=0){
         //      System.out.println(i+" "+mask1);
          //     System.out.println(i+" " +j+" "+dist[i][j]);
              ans = Math.min(dp(mask1,i)+dist[i][j],ans);
             
           }
       }
  //     System.out.println(j+" "+mask);
   //    System.out.println("ans"+ans+" "+mask+" "+j);
       return DP[mask][j]=ans;
   }

   class Node {

       public Node(int x, int y,boolean isL) {

           this.x = x;
           this.y = y;
           this.isL = isL;

       }
       private int x, y;
       private boolean isL;

       public int getX() {
           return x;
       }

       public int getY() {
           return y;
       }

       public boolean isL() {
           return isL;

       }
   }
   
   private int[][] calDist(List<Node> list){
       int[][] dist = new int[22][22];
       int i=0,j=1;
       for(Node node:list){
           i++;
           j=1;
           for(Node node2:list){
             
               dist[i][j++] =Math.max(Math.abs(node.x-node2.x),Math.abs(node.y-node2.y));
               dist[j-1][i] = Math.max(Math.abs(node.x-node2.x),Math.abs(node.y-node2.y));
           
           }
       }
       
   
       return dist;
   }
} 