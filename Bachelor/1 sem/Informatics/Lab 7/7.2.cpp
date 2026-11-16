#include <iostream>
#include <cstdarg>
using namespace std;

// Функция умножения переменного количества чисел
float mult(int n, ...)
{
    va_list args;
    va_start(args, n);

    float result = 1;

    for (int i = 0; i < n; i++)
        result *= (float)va_arg(args, double);

    va_end(args);

    return result;
}

int main()
{
    setlocale(LC_ALL, ".65001");

    cout << "Произведение 3 чисел: ";
    cout << mult(3, 2.0f, 3.0f, 4.0f) << endl;

    cout << "Произведение 7 чисел: ";
    cout << mult(7, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f) << endl;

    cout << "Произведение 11 чисел: ";
    cout << mult(11, 1.0f, 2.0f, 1.0f, 2.0f, 1.0f, 2.0f,
        1.0f, 2.0f, 1.0f, 2.0f, 1.0f) << endl;

    return 0;
}