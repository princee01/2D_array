#include <iostream>
#include <vector>
using namespace std;
// method 1........................................................................................................
//  int main()
//  {
//      int row, col;
//      cin >> row >> col;
//      vector<vector<int>> matrix(row, vector<int>(col));
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < col; j++)
//          {
//              cin >> matrix[i][j];
//          }
//      }
//      int target = 15;
//      for (int i = 0; i < row; i++)
//      {
//          if (matrix[i][0] <= target && target <= matrix[i][col - 1])
//          {
//              int start = 0, end = col - 1;
//              while (start < end)
//              {
//                  int mid = (start + end) / 2;
//                  if (matrix[i][mid] == target)
//                  {
//                      cout << "element found at." << i << " " << mid;
//                      return 0;
//                  }
//                  else if (matrix[i][mid] < target)3
//                  {
//                      start = mid + 1;
//                  }
//                  else
//                      end = mid - 1;
//              }
//          }
//      }
//      cout << "element do not found";
//  }

// method 2.......................................................................................
int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    int target;
    cin >> target;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int start = 0, end = row * col - 1;
    int row_index, col_index;
    while (start < end)
    {
        int mid = (start + end) / 2;
        row_index = mid / col;
        col_index = mid % col;
        if (arr[row_index][col_index] == target)
        {
            cout << "element found at" << row_index << " " << col_index;
            return 0;
        }
        else if (arr[row_index][col_index] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}