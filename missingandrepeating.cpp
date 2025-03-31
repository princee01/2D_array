#include <iostream>
#include <vector>
using namespace std;
// method 1.............................................................................
/*int main()
{
    int n = 7;
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> count(n, 0);
    int a, b;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 0)
            a = i + 1;
        if (count[i] == 2)
            b = i + 1;
    }
    cout << a << " " << b;
}*/
int main()
{
    int n = 7;
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    for (int i = 0; i < n; i++)
    {
        arr[i]--;
    }
    cout << endl;
    // new array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // store element and occurence in same place
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 0)
        {
            cout << "missing number is:" << i + 1 << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 2)
        {
            cout << "repeating number is:" << i + 1 << endl;
            break;
        }
    }
}