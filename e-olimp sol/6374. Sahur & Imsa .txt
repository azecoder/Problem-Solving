#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int cases;
       cin >> cases;
       
       int i = 1;
       while (i <= cases)
       {
           int h;
               cin >> h;
           int m;
               cin >> m;
           int all_minute = h*60 + m;
           int anw_minute = all_minute - 45;
           int changed_hour = anw_minute / 60;
           int changed_minute = anw_minute % 60;
           cout << "Case #" << i << ": ";
           if(changed_hour == 0 && changed_minute < 0)
           {
               changed_hour = 23;
               changed_minute = 60 + changed_minute;
           }
           cout << changed_hour << " " << changed_minute << endl;
       i++;
       }

   
   return EXIT_SUCCESS;
}