#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int a;
  int odd = 0;
  int min = 101;

  for (int i = 0; i < 7; i++)
  {
    cin >> a;
    if (a % 2 == 1)
    {
      odd += a;
      if (min > a)
        min = a;
    }
  }
  if (odd == 0)
    cout << -1;
  else
  {
    cout << odd << '\n' << min;

  }

  return 0;
}