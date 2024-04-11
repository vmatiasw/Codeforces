#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false), cin.tie(nullptr);

  string s, t;

  cin >> s >> t;

  unsigned int s_len = s.length();
  unsigned int t_len = t.length();
  unsigned int max_len = max(s_len, t_len);

  for (unsigned int i = 0; i < max_len; i++)
  {
    if (i<s_len)
    {
      s[i] = tolower(s[i]);
    }
    if (i<t_len)
    {
      t[i] = tolower(t[i]);
    }
  }

  if (s < t)
  {
    cout << -1 << endl;
  }
  else if (s > t)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }
}