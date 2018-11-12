import java.util.*;

 

public class Main

{

  static long[] countPerfect(int n)

  {

    int i, j;

    long cat[]= new long[51];

    cat[0] = cat[1] = 1;

    for(i = 2; i <= n; i++)

      for(j = 0; j < i; j++)

        cat[i] += cat[j] * cat[i - j - 1];

    return cat;

  }

 

  public static void main(String[] args)

  {

    long cat[] = countPerfect(50);

    Scanner con = new Scanner(System.in);

    while(con.hasNext())

    {

      int n = con.nextInt();

      System.out.println(cat[n/2]);

    }

  }

}