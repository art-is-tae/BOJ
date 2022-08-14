#include <bits/stdc++.h>

using namespace std;

int main()
{
  int arr[3][4];
  int i, sum = 0;
  for (i = 0; i < 3; i++)
  {
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    sum = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
    if (sum == 3)
      cout << "A\n";
    else if (sum == 2)
      cout << "B\n";
    else if (sum == 1)
      cout << "C\n";
    else if (sum == 0)
      cout << "D\n";
    else
      cout << "E\n";
  }

  return 0;
}