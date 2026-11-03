#include <iostream>

using namespace std;

int main(){
    int n, p, z;

    cin >> n;

    p = n / 2;
    z = 1;
    for (int i = 1; i <= (n + 1) / 2; i++){
        for(int j = 1; j <= p; j++){
            cout << " ";
        }
        for (int j = 1; j <= z; j++){
            cout << '*';
        }
        p--;
        z += 2;
        cout << "\n";
    }
}