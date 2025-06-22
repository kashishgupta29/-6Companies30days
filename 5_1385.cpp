// 1385. Find the Distance Value Between Two Arrays
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution
{
public:
  int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
  {
    int count = 0;

    for (int i = 0; i < arr1.size(); i++)
    {
      bool found = true;

      for (int j = 0; j < arr2.size(); j++)
      {
        if (abs(arr1[i] - arr2[j]) <= d)
        {
          found = false;
          break;
        }
      }
      if (found)
        count++;
    }

    return count;
  }
};
int main()
{
  int n;
  cin >> n;
  vector<int> arr1(n);
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  int m;
  cin >> m;
  vector<int> arr2(m);
  for (int i = 0; i < m; i++)
    cin >> arr2[i];
  int d;
  cin >> d;
  Solution a;
  cout << a.findTheDistanceValue(arr1, arr2, d);
}
