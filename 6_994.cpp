#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  void update_orange(vector<vector<int>> &grid, int i, int j)
  {
    if (i > 0 && grid[i - 1][j] != 0)
      grid[i - 1][j] = 2;
    if (j > 0 && grid[i][j - 1] != 0)
      grid[i][j - 1] = 2;
    if (i < (grid.size() - 1) && grid[i + 1][j] != 0)
      grid[i + 1][j] = 2;
    if (j < (grid[0].size() - 1) && grid[i][j + 1] != 0)
      grid[i][j + 1] = 2;
  }
  int orangesRotting(vector<vector<int>> &grid)
  {
    int row = grid.size();
    int col = grid[0].size();
    bool found = true;
    int ans = 0;
    vector<vector<int>> temp = grid;
    while (found)
    {
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < col; j++)
        {
          if (grid[i][j] == 2)
          {
            update_orange(temp, i, j);
          }
        }
      }
      if (grid == temp)
        found = false;
      else
      {
        grid = temp;
        ans++;
      }
    }
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (grid[i][j] == 1)
          return -1;
      }
    }
    return ans;
  }
};
int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> grid[i][j];
    }
  }
  Solution s;
  cout << s.orangesRotting(grid) << endl;
}