#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int delA, addA;
    cin >> delA >> addA;

    bool findA = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == delA)
        {
            if (!findA){
                findA = true;
                i++;
            }
        }
        if (findA){
            arr[i - 1] = arr[i];
        }
    }

    arr[n - 1] = addA;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}