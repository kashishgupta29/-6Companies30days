// 1248. Count Number of Nice Subarrays

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int numberOfSubarrays(vector<int> &nums, int k)
  {
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      int odd = 0;
      for (int j = i; j < nums.size(); j++)
      {
        if (nums[j] % 2 == 1)
          odd++;
        if (odd == k)
          count++;
        if (odd > k)
          break;
      }
    }
    return count;
  }
};
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int k;
  cin >> k;
  Solution s;
  cout << s.numberOfSubarrays(arr, k);
}