#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int narr[26] = {};
  string s;
  cin >> s;
  for (auto c : s) {
    narr[c - 'a']++;
  }
  for (int i = 0; i < 26; i++)
    cout << narr[i] << ' ';
}
