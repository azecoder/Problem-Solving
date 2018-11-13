import java.util.*;

public class Main {

public static void main(String[] args) {

Scanner in = new Scanner(System.in);
long t = in.nextLong();
String o = "";
while(t>0){
    if(t%2==1)
    {
        o = "SX"+o;    
    }
    else o = "S"+o ;
    t=t/2;
}
System.out.println(o.substring(2,o.length()));
}
}