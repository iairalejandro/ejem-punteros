#include <iostream>

using namespace std;

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
/*
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << tam << endl;

    cout << *arr << endl;
*/
    int *ptr = arr;
/*
    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + tam - 1) << endl;

*/
    for(int i = tam - 1; i >= 0; i--){
        cout << *(ptr + i) << " ";
    }

    return 0;


}