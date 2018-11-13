#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>

#define SIZE 100001
#define f first
#define s second
#define LL long long

using namespace std;

typedef pair <int,int> PR;      PR ar[SIZE];

int *a = new int[SIZE];
int n;
// * * * * * * * * * * * -  M E R G E  - * * * * * * * * * * * //
void Merge(int *Array1 , int *Array2 , int l , int mid , int r , LL &cvb)
{  
  for (int i = l; i <= r; i++) Array2[i] = Array1[i];
 
  int i = l , j = mid + 1;
  for (int k = l; k <= r; k++)
  {
      if(i > mid)                         Array1[k] = Array2[j++];
      else if(j > r)                      Array1[k] = Array2[i++];
      else if(Array2[j] < Array2[i])      Array1[k] = Array2[j++], cvb += (mid - i + 1);
      else                                Array1[k] = Array2[i++];
  }
}
// * * * * * * * * * -  M E R G E    S O R T  - * * * * * * * * * //
void MSort(int *Array1 , int *Array2 , int left , int right , LL &cvb) {
  if (right <= left) return;
  int mid = left + (right - left) / 2;
  MSort(Array1 , Array2 , left , mid , cvb);
  MSort(Array1 , Array2 , mid + 1 , right , cvb);
  Merge(Array1 , Array2 , left , mid , right , cvb);
}

// * * * * * * * * * * -  M U Q A Y I S E - * * * * * * * * * * //
bool Muq(PR a , PR b) {
  return a.f == b.f ? a.s < b.s : a.f < b.f;
}
// M A I N . . .
int main()
{
  LL cvb = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
      cin >> ar[i].f >> ar[i].s;
  sort(ar , ar + n , Muq);
  for (int i = 0; i < n; i++) a[i] = ar[i].s;
 
  int *arr = new int[SIZE];
  MSort(a , arr , 0 , n - 1 , cvb);
 
  cout << cvb << endl;

 
  return 0;
} 