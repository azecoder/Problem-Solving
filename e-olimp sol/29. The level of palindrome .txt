#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define ll long long

bool polindrom(string s)
{
   bool flag; 
   ll j = s.length()-1;
     for(ll i=0;i<=s.length()-1;i++)
     {
         if(s[i] == s[j])    flag = true;
         else
         {
             flag = false;
           break;
         }
         j--;
     }
 return flag;
}

string inttostr(ll number)
{
   if (number == 0)
         return "0";
 
     string temp = "";
     string returnvalue = "";
     while (number > 0)
     {
         temp += number%10+48;
         number /= 10;
     }
     
   for (int i = 0; i < temp.length(); i++)
         returnvalue += temp[temp.length()-i-1];
     return returnvalue;
}

ll ters(ll  n)
{
     string a="",s;
     s=inttostr(n);
     for(ll i=s.length()-1;i>=0;i--)
     {
         a+=s[i];
     }
 
     return atoll(a.c_str());
}

int main()
{
   ll n,t=0;
         cin >> n;
     
   while(!polindrom(inttostr(n)))
     {
         t ++;
         n += ters(n);
     
     }
 
     cout << t << endl;

   
   return 0;
}