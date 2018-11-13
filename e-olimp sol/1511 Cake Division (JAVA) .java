import java.util.*;

import java.io.*;

 

public class Main

{

  public static double cut(double length, double width, int pieces)

  {

    double temp, res = 1e100;

    int i;

    if (pieces == 1) return Math.max(length,width) / Math.min(length,width);

    for(i = 1; i < pieces; i++)

    {

      temp = Math.max(cut(i * length / pieces,width,i),

                      cut((pieces - i) * length / pieces,width,pieces - i));

      if (temp < res) res = temp;

    }

    for(i = 1; i < pieces; i++)

    {

      temp = Math.max(cut(length,i * width / pieces,i),

                      cut(length,(pieces - i) * width / pieces,pieces - i));

      if (temp < res) res = temp;

    }

    return res;

  }

 

  public static void main(String[] args)

  {

    Scanner con = new Scanner(System.in);

    PrintWriter out = new PrintWriter(System.out,true);

    while(con.hasNextInt())

    {

      int length = con.nextInt(),

          width = con.nextInt(),

          pieces = con.nextInt();

      double res = cut(length,width,pieces);;

      out.printf(Locale.US,"%.4f\n",res);

    }

  }

}