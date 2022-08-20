#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int cnt[10] = {0};
  int N, ans = 1;
  char *str;
  cin >> N;

  while (N)
  {
    cnt[N % 10]++;
    N /= 10;
  }

  for (int i = 0; i < 10; i++)
  {
    if (i == 6 || i == 9)
      continue;
    ans = max(ans, cnt[i]);
  }
  ans = max(ans, (cnt[6] + cnt[9] + 1) / 2);
  cout << ans;
}