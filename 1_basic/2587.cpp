#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int arr[5];
  int i, sum = 0;
  ;
  for (i = 0; i < 5; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  sort(arr, arr + 5);
  cout << sum / 5 << "\n";
  cout << arr[2];
}