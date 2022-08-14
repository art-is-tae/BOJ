#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  int res, m;
  cin >> a >> b >> c;

  if (a == b && b == c) res = 10000 + (a * 1000);
  else if (a == b && b != c) res = 1000 + (a * 100);
  else if (b == c && c != a) res = 1000 + (b * 100);
  else if (c == a && b != c) res = 1000 + (c * 100);
  else {
    m = max(a, b);
    m = max(m, c);
    res = m * 100;
  }

  cout << res;

  return 0;
}