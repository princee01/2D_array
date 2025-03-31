#include <iostream>
using namespace std;
void diagonalsum(int arr[3][3], int row, int col)
{
    int first = 0, second = 0;
    // first diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                first += arr[i][j];
            }
        }
    }
    // second diagonal
    int i = 0;
    int j = col - 1;
    while (j >= 0)
    {
        second += arr[i][j];
        j--, i++;
    }
    cout << "sum of first diagonal: " << first << endl;
    cout << "sum of second diagonal: " << second << endl;
}
int main()
{

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    diagonalsum(arr, 3, 3);
}