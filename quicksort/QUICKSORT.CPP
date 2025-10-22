#include <iostream>
using namespace std;

void swap(int a[], int j, int k) {
    int t = a[j]; a[j] = a[k]; a[k] = t;
}

int partition(int a[], int l, int h) {
    int pvt = a[h], j = l - 1;
    for (int k = l; k < h; k++) {
        if (a[k] < pvt) {
            j++;
            swap(a, j, k);
        }
    }
    swap(a, j + 1, h);
    return j + 1;
}

void qckSort(int a[], int l, int h) {
    if (l < h) {
        int pi = partition(a, l, h);
        qckSort(a, l, pi - 1);
        qckSort(a, pi + 1, h);
    }
}

int main() {
    int a[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "El arreglo antes de ordenarlo: ";
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
    qckSort(a, 0, size - 1);
    cout << "El arreglo después de ordenarlo: ";
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
}

