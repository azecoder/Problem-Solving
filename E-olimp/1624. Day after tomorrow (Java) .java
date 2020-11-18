import java.util.*;

public class Main {

   public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
       
       int day = input.nextInt();
       int month = input.nextInt();
       int year = input.nextInt();
       
       int ans_day;
       /******************* IF MONTH IS FEBRUARY *****************************/
       if(month == 2){
           if(((year % 100) == 0) && (year % 400) != 0){
               if(day == 28) {
                   ans_day = 2;
                   month += 1;
               }
               else if(day == 27){
                   ans_day = 1;
                   month += 1;
               }
               else
                   ans_day = day + 2;
           }
           else if((year % 4) == 0) {
               if(day == 29) {
                   ans_day = 2;
                   month += 1;
               }
               else if(day == 28){
                   ans_day = 1;
                   month += 1;
               }
               else
                   ans_day = day + 2;                
           }
           else {
               if(day == 28) {
                   ans_day = 2;
                   month += 1;
               }
               else if(day == 27){
                   ans_day = 1;
                   month += 1;
               }
               else
                   ans_day = day + 2;                
           }
       }
       /******************** IF DAYS OF MONTH EQUALS 31 **********************/
       else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
           if(day == 31) {
               ans_day = 2;
                   month += 1;
           }
           else if(day == 30) {
               ans_day = 1;
                   month += 1;
           }
           else
               ans_day = day + 2;
       }
       /********************* IF MONTH IS DECEMBER ***************************/
       else if(month == 12) { 
           if(day == 31) {
               ans_day = 2;
               month = 1;
               year += 1;
           }
           else if(day == 30) {
               ans_day = 1;
               month = 1;
               year += 1;
           }
           else
               ans_day = day + 2;        
       }
       /********************** FOR OTHER MONTHS ******************************/
       else{
           if(day == 30) {
               ans_day = 2;
               month += 1;
           }
           else if(day == 29) {
               ans_day = 1;
               month += 1;
           }
           else
               ans_day = day + 2;            
       }
       System.out.println(ans_day + " " + month + " " + year);
   }
}