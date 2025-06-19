// 1823. Find the Winner of the Circular Game
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
  int helper(int n, int k)
  {
    if (n == 1)
      return 0;
    return (helper(n - 1, k) + k) % n;
  }
  int findTheWinner(int n, int k) { return helper(n, k) + 1; }
};
int main()
{
  int n, k;
  cin >> n >> k;
  Solution s;
  cout << s.findTheWinner(n, k);
}