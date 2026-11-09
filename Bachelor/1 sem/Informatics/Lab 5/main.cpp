#include <iostream>
#include <clocale>//библиотеки

using namespace std;

// Функция для того, чтобы поменять две строки массива массива
void swapRows(int a[][100], int r1, int r2, int m)
{
    for (int j = 0; j < m; j++)
    {
        int k = a[r1][j];
        a[r1][j] = a[r2][j];
        a[r2][j] = k;
    }
}

int main()
{
    setlocale(LC_ALL, ".65001");

    int n, m, a[100][100];

    cin >> n;
    cin >> m;

    cout << "элементы массива:" << endl;
    for (int i = 0; i < n; i++)//ввод элементов массива
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Сортировка по значениям третьего столбца
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j][2] > a[j + 1][2])
                swapRows(a, j, j + 1, m);

    // Вывод массива
    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << "\t";

        cout << endl;
    }

    return 0;
}