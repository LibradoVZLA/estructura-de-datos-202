#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {10, 20, 30, 40, 50};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    int elementoBuscado = 30;
    bool encontrado = false;

    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == elementoBuscado) {
            cout << "Elemento " << elementoBuscado << " encontrado en la posición " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Elemento no encontrado en el arreglo." << endl;
    }

    return 0;
}