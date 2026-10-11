#include <iostream> //Подключение библиотеки для ввода и вывода
#include <math.h> //Подключение библиотеки для использования функции pow()
#include <clocale> //Подключение библиотеки для кириллицы

using namespace std; //Пространство имен std для ввода и вывода

float a = 1000; //Переменная а типа float
float b = 0.0001; //Переменная b типа float

double a_d = 1000; //Переменнная a типа double
double b_d = 0.0001; //Переменная b типа double

int main(){ //Главная функция
    setlocale(LC_ALL, ".65001"); //Поключение кириллицы
    float first = pow(a - b, 2); //Первое действие (a - b)^2 для float
    double first_d = pow(a_d - b_d, 2); //Первое действие (a - b)^2 для double
    float second = pow(a, 2) - 2 * a * b; //Второе действие (a^2 - 2ab) для float
    double second_d = pow(a_d, 2) - 2 * a_d * b_d; //Второе действие (a^2 - 2ab) для double
    float third = pow(b, 2); //Третье действие b^2 для float
    double third_d = pow(b_d, 2); //Третье действие b^2 для double
    float ans = (first - second) / third; //Оъединение действий в формулу float
    double ans_d = (first_d - second_d) / third_d; //Оъединение действий в формулу double

    cout << "a = 1000, b = 0.0001" << "\n"; //Выводим значения переменных
    cout << "При значениях a и b типа float ответ: "; //Для float
    cout << ans << "\n"; //Вывод ответа для типа float
    cout << "При значениях a и b типа double ответ: "; //Для double
    cout << ans_d; //Вывод ответа для типа double
} //Конец главной функции и программы