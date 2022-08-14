#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  int max = -1;
  int min = 10000001;
  int mid = 0;
  
  if (max <= a) max = a;
  if (max <= b) max = b;
  if (max <= c) max = c;

  if (min > a) min = a;
  if (min > b) min = b;
  if (min > c) min = c;

  mid = a + b + c - max - min;

  cout << min << ' ' << mid << ' ' << max;
  
  return 0;
}