#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // rotate matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[j][row - 1 - i] = matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}