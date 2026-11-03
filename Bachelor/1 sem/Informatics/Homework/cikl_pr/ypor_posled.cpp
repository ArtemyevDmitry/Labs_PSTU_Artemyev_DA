#include <iostream>

using namespace std;

int main(){
    int a, b, i = 1, n;

    bool f = true;

    cin >> a;

    if (a != 0){
        cin >> b;
        while (b != 0 && f == true){
            f = (a < b) && f;
            a = b;
            cin >> b;
        }
    }
    if (f == true){
        cout << "sorted";
    }
    else{
        cout << "unsorted";
    }
}