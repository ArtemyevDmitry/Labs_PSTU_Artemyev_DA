#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n + 2; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n + 2; i++){
        cout << a[i] << " ";
    }
    cout << endl << a[100];
}