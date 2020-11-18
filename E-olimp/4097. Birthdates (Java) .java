import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
  
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       StringBuffer sb = new StringBuffer("");
       int n=Integer.parseInt(br.readLine());
       Birth[] people=new Birth[n];
       for(int i=0;i<people.length;i++){
           String[]str=br.readLine().split(" ");
           people[i]=new Birth(str[0], Integer.parseInt(str[1]), Integer.parseInt(str[2]), Integer.parseInt(str[3]));
       }
       Arrays.sort(people);
       sb.append(people[0].getName()).append("\n");
       sb.append(people[n-1].getName()).append("\n");
       System.out.print(sb);
   }
}
class Birth implements Comparable<Birth>{
   private String name;
   private int  day,month,year;

   public Birth(String name, int day, int month, int year) {
       this.name = name;
       this.day = day;
       this.month = month;
       this.year = year;
   }

   public String getName() {
       return name;
   }

   public int getDay() {
       return day;
   }

   public int getMonth() {
       return month;
   }

   public int getYear() {
       return year;
   }
  
   @Override
   public int compareTo(Birth x) {
       if(this.year>x.getYear()){
           return -1;
       }else if(this.year<x.getYear()){
           return 1;
       }else{
           if(this.month>x.getMonth()){
               return -1;
           }else if(this.month<x.getMonth()){
               return 1;
           }else{
               if(this.day>x.getDay()){
                 return -1; 
               }else{
                 return 1; 
               }
           }
       }
   }
  
}