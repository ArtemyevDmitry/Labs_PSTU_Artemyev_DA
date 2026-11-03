#include <iostream>

using namespace std;

int main(){
    int n, s, p;
    cin >> n;
    s = 0;
    p = 1;
    for(int i = 1; i <= n; i++){
        p = 1;
        for(int j = i; j <= 2*i; j++){
            p *= j;
        }
        s += p;
    }
    cout << s;
}