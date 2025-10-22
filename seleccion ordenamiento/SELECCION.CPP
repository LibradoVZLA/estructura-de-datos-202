#include <iostream>
using namespace std;

void SELECCION(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {65, 26, 13, 23, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo antes de ordenar:" << endl;
    printArray(arr, n);

    SELECCION(arr, n);

    cout << "Arreglo después de ordenar:" << endl;
    printArray(arr, n);

    return 0;
}
