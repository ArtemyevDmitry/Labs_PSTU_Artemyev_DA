#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0){
            if(i == 0){
                arr[i] = 0;
            }
            else if (i == size - 1){
                arr[i] = 0;
            }
            else{
                arr[i] = arr[i - 1] + arr[i + 1];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}