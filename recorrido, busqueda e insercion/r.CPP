#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {10, 20, 30, 40, 50};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Recorriendo el arreglo:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << endl;
    }
    return 0; 
}