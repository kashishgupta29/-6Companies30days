#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
  int findContentChildren(vector<int> &g, vector<int> &s)
  {
    sort(g.begin(), g.end(), greater<int>());
    sort(s.begin(), s.end(), greater<int>());
    int j = 0;
    int count = 0;
    for (int i = 0; i < g.size() && j < s.size(); i++)
    {
      if (g[i] <= s[j])
      {
        count++;
        j++;
      }
    }
    return count;
  }
};
int main()
{
  int n;
  cin >> n;
  vector<int> g(n);
  for (int i = 0; i < n; i++)
    cin >> g[i];
  int m;
  cin >> m;
  vector<int> s(m);
  for (int i = 0; i < m; i++)
    cin >> s[i];
  Solution a;
  cout << a.findContentChildren(g, s);
}