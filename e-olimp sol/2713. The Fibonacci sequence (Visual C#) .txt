using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace e_olimp_2713 {
  class Program {
     static void Main(string[] args) {
        long a, b, c;
        int k;
        a = 1;
        b = 1;
        c = 0;
        k = int.Parse(Console.ReadLine());
        if (k == 1 || k == 2) {
           Console.WriteLine("1");
        }
        else if(k>2) {
           string aa = "11";
           for (int i = 3; i <= 100 ; i++) {
              c = a + b;
              a = b;
              b = c;
              aa += c.ToString();
           }
           Console.WriteLine((aa[k-1]).ToString());
        }
     }
  }
} 