#include <iostream>
using namespace std;

// Сложение вещественных чисел
void sum(float a, float b)
{
    cout << a + b << endl;
}

// Сложение комплексных чисел
void sum(float a, float b, float c, float d)
{
    float real = a + c;
    float imag = b + d;

    cout << real;

    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, ".65001");

    cout << "Вещественные числа " << endl;
    float a, b;
    cin >> a >> b;

    sum(a, b);

    float a1, b1, a2, b2;

    cout << "Комплексные числа " << endl;
    cin >> a1 >> b1;
    cin >> a2 >> b2;

    cout << "Их сумма: ";
    sum(a1, b1, a2, b2);

    return 0;
}