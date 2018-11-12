import java.util.Scanner;

public class Main {
  public static void main(String[] args){
      Scanner x = new Scanner(System.in);
      int n = x.nextInt();
      
      int time;
      int projects;
      int pro[] = new int [1000];
      for(int i=0; i<n; i++){
          time = x.nextInt();
          projects = x.nextInt();
          for(int j=0; j<projects; j++){
              pro[j] = x.nextInt();
          }
          int c;
          for(int j=0; j<projects-1; j++){
              for(int k=0; k<projects-1; k++){
                  if(pro[k] < pro[k+1]){
                      c = pro[k];
                      pro[k] = pro[k+1];
                      pro[k+1] = c;
                  }
              }
          }
          int sum=0;
          if(time > projects) time = projects;
          for(int j=0; j<time; j++){
              sum += pro[j];
          }
          System.out.println(sum);
      }
  }
}