#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 15;
    int numeros[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        numeros[i] = rand() % 20 + 1;
    }
    cout << "Números generados:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Numero " << (i + 1) << " : " << numeros[i] << endl;
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    cout << "\nNúmeros ordenados:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Numero " << (i + 1) << " : " << numeros[i] << endl;
    }

    return 0;
}
