#include <iostream> 

using namespace std;

int main(){
    int a[100];
    int n, cur;
    int k = 0;
    bool f = false;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];            
    }
    
    for (int i = 1; i < n; i++)
    {
        cur = a[i];
        k = 0;
        f = false;

        for (int j = i - 1; j >= 0 && !f; j--)
        {
            if (a[j] <= cur)
            {
                k = j + 1;
                f = true;
            }
            else
            {
                a[j + 1] = a[j];
            }
        }

        a[k] = cur;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

}