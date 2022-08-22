#include <bits/stdc++.h>
using namespace std;

int n, x;
bool cnt[2000001] = {};
int arr[1000001];

int main(void)
{
  int res = 0;

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> x;

  int tmp;

  for (int j = 0; j < n; j++)
  {

    tmp = x - arr[j];
    if (tmp > 0 && cnt[tmp])
      res++;
    cnt[arr[j]] = true;
  }

  cout << res;
}