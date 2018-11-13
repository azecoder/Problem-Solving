import java.util.*;

import java.io.*;

 

public class Main

{

  public static void main(String[] args)

  throws Exception

  {

    PrintWriter out = new PrintWriter(System.out,true);

    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

    String stroka;

    int cs = 1;

    while(!(stroka = in.readLine()).equals("-1 -1 -1"))

    {

      StringTokenizer st = new StringTokenizer(stroka);

      int l = Integer.parseInt(st.nextToken());

      int h = Integer.parseInt(st.nextToken());

      int k = Integer.parseInt(st.nextToken());

       

      double s = 0;

      int exponent = (int) (k * Math.log10(h));

      for(int i = l; i <= h; i++)

        s += Math.pow(10,k * Math.log10(i) - exponent);

       

      while (s >= 1) { s /= 10; exponent++; }

       

      if (h == 0) { s = 0; exponent = 1;}

      out.printf(Locale.US,"Case %04d: %.6fe%010d\n",cs++, s, exponent);

    }

  }

}