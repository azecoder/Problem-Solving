#include <cstdlib>
#include <iostream>
#include <vector>

#ifdef __ELAPSED_TIME__
#include <ctime>
#endif
using namespace std;

int calculate_pythagorean_triples(int n, int x, int y, int z,
 vector<bool>& triples)
{
 if (x > n || y > n || z > n)    return 0;
#ifdef DEBUG
 cerr << x << ' ' << y << ' ' << z << endl;
#endif
 for (int nx = x, ny = y, nz = z; nx <= n && ny <= n && nz <= n;
   nx += x, ny += y, nz += z)
   triples[nx] = triples[ny] = triples[nz] = true;
 const int nr_triples = 3;
 const int matrices[nr_triples][nr_triples][nr_triples] = {
   {{-1, 2, 2}, {-2, 1, 2}, {-2, 2, 3}},
   {{1, 2, 2}, {2, 1, 2}, {2, 2, 3}},
   {{1, -2, 2}, {2, -1, 2}, {2, -2, 3}}
 };
 int nr_pt = 0;
 for (int i = 0; i < nr_triples; i++) {
   int cx = matrices[i][0][0] * x + matrices[i][0][1] * y + matrices[i][0][2] * z,
       cy = matrices[i][1][0] * x + matrices[i][1][1] * y + matrices[i][1][2] * z,
       cz = matrices[i][2][0] * x + matrices[i][2][1] * y + matrices[i][2][2] * z;
       nr_pt += calculate_pythagorean_triples(n, cx, cy, cz, triples);
 }
 return nr_pt + 1;
}

int main()
{
#ifdef __ELAPSED_TIME__
 clock_t start = clock();
#endif
 int n;
 while (cin >> n) {
   if (n < 5)
     cout << 0 << ' ' << n << endl;
   else {
     vector<bool> triples(n + 1, false);
     int nr_primitive_triples = calculate_pythagorean_triples(n, 3, 4, 5, triples);
     int nr_not_triples = 0;
     for (int i = 1; i <= n; i++)
       if (!triples[i])
         nr_not_triples++;
     cout << nr_primitive_triples << ' ' << nr_not_triples << endl;
   }
 }
#ifdef __ELAPSED_TIME__
 cerr << "elapsed time = " <<
   static_cast<double>(clock() - start) / CLOCKS_PER_SEC << " sec.\n";
#endif
 
 return 0;
} 