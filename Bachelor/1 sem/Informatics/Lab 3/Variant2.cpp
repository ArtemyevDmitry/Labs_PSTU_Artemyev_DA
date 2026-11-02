#include <iostream>
#include <cmath>
#include <clocale> //Подключение библиотек

using namespace std;//Пространство имен

int main() {// главная функция
    setlocale(LC_ALL, "Russian");//подключение кириллицы

    const double pi = acos(-1.0);//константа для Пи

    double a = pi / 5;//инициализация начальных значений 
    double b = 9 * pi / 5;
    const int k = 10;
    const int n = 40;
    const double eps = 0.0001;

    double h = (b - a) / k;//Вычисление шага

    for (int j = 0; j <= k; j++) {//внешний цикл
        double x = a + j * h;//Прибавление шага

        double SN = 0;// начальные значения
        double SE = 0;

        for (int i = 1; i <= n; i++) {// вложенный цикл для вычисления суммы
            SN += cos(i * x) / i;
        }

        int i = 1;
        double sinHalf = fabs(sin(x / 2));//синус половины х(для функции)

        while (1.0 / (i * sinHalf) > eps) {//вложенный цикл для заданной точности Eps
            SE += cos(i * x) / i;
            i++;
        }

        double Y = -log(fabs(2 * sin(x / 2)));// вычисление функции

        cout << "X=" << x
            << " SN=" << SN
            << " SE=" << SE
            << " Y=" << Y << endl;//вывод ответа
    }

    return 0;
}