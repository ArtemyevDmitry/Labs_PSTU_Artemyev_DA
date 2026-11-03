#include <iostream>
#include <clocale>

using namespace std;

int main(){
    int a = 12;       // Создаём переменную a со значением 12
    int* ptr = &a;    // Создаём указатель ptr, хранящий адрес переменной a
    int copy = *ptr;  // Копируем значение переменной, на которую указывает ptr, в copy

    (*ptr)++;         // Увеличиваем значение переменной a на 1 через указатель
    cout << a << ' ' << copy; // Выводим значения a и copy через пробел
}