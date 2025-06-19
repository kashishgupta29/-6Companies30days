// 462. Minimum Moves to Equal Array Elements II
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution
{
public:
  int minMoves2(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    int sum = 0;
    int n = nums.size();
    n = n / 2;
    int res;
    if (nums.size() % 2 == 0)
    {
      res = (nums[n] + nums[n - 1]) / 2;
    }
    else
    {
      res = nums[n];
    }
    for (int i = 0; i < nums.size(); i++)
    {
      sum += abs(res - nums[i]);
    }
    return sum;
  }
};
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Solution s;
  cout << s.minMoves2(arr);
}
