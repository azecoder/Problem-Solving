import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
/**
*
* @author Musaqil
*/
public class Main {

   public static Map< Character, Integer > map;
   public static void main(String[] args) {
       
       Scanner in= new Scanner(System.in);
       char ch='A';
       map=new HashMap<Character, Integer>();
       for(int i=0;i<10;i++)
           map.put(Character.forDigit(i, 10), i);
       for(int i=65;i<92;i++){
           ch=(char)i;
           map.put(ch, i-55);
       }
       for(int i=97;i<124;i++){
           ch=(char)i;
           map.put(ch, i-61);
       }
  //     System.out.println(map.get('z'));
       int n,l1,l2,mx,mn,car=0,q=0,bl=0;
       String s1,s2;
       n=in.nextInt();
       l1=in.nextInt();
       s1=in.next();
       l2=in.nextInt();
       s2=in.next();
       if(l1>l2){
           bl=1;
           mn=l2;
           mx=l1;
       }
       else{
           mn=l1;
           mx=l2;
           bl=2;
       }
   
      for(int i=1;i<=mn;i++)
          if((int)(map.get(s1.charAt(l1-i)) +map.get(s2.charAt(l2-i))+q)>=n){
              car++;
              q=1;
          }else
              q=0;
     
      if(bl==1 && q==1 && l1!=l2)
          for(int i=l1-mn-1;i>=0;i--)
               if((map.get(s1.charAt(i))+q)>=n){
                   car++;
                   q=1;
               }else
               q=0;
      if(bl==2 && q==1 && l1!=l2)
          for(int i=l2-mn-1;i>=0;i--)
               if(map.get(s2.charAt(i))+q>=n){
                   car++;
                   q=1;
               }else
                   q=0;
     
    //  if(q==1 )car++;
      System.out.println(car);
   }
     
} 