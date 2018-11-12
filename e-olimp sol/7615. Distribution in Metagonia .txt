import java.io.*;
import java.util.*;

public class Main {
    
    List<Long> solve(long n, long m) {
        if (n == 0) {
            return new ArrayList<>();
        } else if (n % 2 == 0) {
            return solve(n / 2, m * 2);
        } else {
            long q = 1;
            while (q * 3 <= n) {
                q *= 3;
            }
            List<Long> r = solve((n - q) / 2, m * 2);
            r.add(m * q);
            return r;
        }
    }

    void run() {
        
        Scanner in = new Scanner(System.in);
        
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            List<Long> solution = solve(in.nextLong(), 1);
            System.out.println(solution.size());
            for(int ss = 0; ss < solution.size(); ss++){
                System.out.print(solution.get(ss) + " ");
            } 
        }
    }

    /**
     *
     * @param args
     */
    public static void main(String[] args) {

        new Main().run();

    }
}
