#include <iostream>
using namespace std;

int main() {
    int arreglo[6] = {10, 20, 30, 40, 50}; 
    int tam = 5;
    int posicion = 2;
    int elemento = 25;

    for (int i = tam; i > posicion; i--) {
        arreglo[i] = arreglo[i - 1];
    }
    arreglo[posicion] = elemento;
    tam++;

    cout << "Arreglo después de la inserción:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << endl;
    }

    return 0;
}