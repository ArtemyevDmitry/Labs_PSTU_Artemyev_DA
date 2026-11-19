#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, ".65001");
    const int n = 5;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Статический массив без выхода за его пределы:" << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int b[n];

    for (int i = 0; i < n + 2; i++){
        cin >> b[i];
    }
    cout << "Статический массив с выходом за его пределы:" << endl;
    for (int i = 0; i < n + 2; i++){
        cout << b[i] << " ";
    }
    cout << endl << "Ошибка...";

    return 0;
}