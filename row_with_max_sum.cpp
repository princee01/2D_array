#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {5, 2, 3, 16, 8, 20, 34, 20, 11, 30, 25, 5};
    int sum = 0, index = -1;
    for (int i = 0; i < 3; i++)
    {
        int total_sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > total_sum)
        {
            total_sum = sum;
            index = i;
        }
    }
    cout << "row with maximum sum: " << index;
}