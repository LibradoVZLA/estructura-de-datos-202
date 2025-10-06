#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;   
    int numeros[TAM];    
    int pares = 0, impares = 0;

   
    cout << "Ingresa " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Conteo de pares e impares
    for (int i = 0; i < TAM; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    
    cout << "\nCantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}

