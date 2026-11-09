#include <iostream>
#include <clocale>// подключение библиотек 
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    int n, m[200];// создание массива и длинны массива n
    
    cin >> n;

    for (int i = 0; i < n; i++)// заполнение случайными числами от -50 до 49
        m[i] = rand() % 100 - 50;

    // Выводим начальный массив
    cout << "Начальный массив: ";
    for (int i = 0; i < n; i++)
        cout << m[i] << " ";
    cout << endl;

    // Удаляем первый элемент, который равнен нулю
    for (int i = 0; i < n; i++)
    {
        if (m[i] == 0)
        {
            for (int j = i; j < n - 1; j++)
                m[j] = m[j + 1];

            n--;
            break;
        }
    }

    // Добавляем элемент после каждого четного числа, равный по значению
    //Предпоследний - 2
    for (int i = 0; i < n; i++)
    {
        if (m[i] % 2 == 0 && i > 0)
        {
            int k = m[i - 1] + 2;

            for (int j = n; j > i + 1; j--)
                m[j] = m[j - 1];

            m[i + 1] = k;
            n++;
            i++;
        }
    }

    // Выводим массив после всех изменений 
    cout << "Итоговый массив: ";
    for (int i = 0; i < n; i++)
        cout << m[i] << " ";
    cout << endl;

    return 0;
}