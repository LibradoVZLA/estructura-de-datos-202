#include <iostream>
using namespace std;

int main() {
  
    int matriz[3][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} },
        { {19, 20, 21}, {22, 23, 24}, {25, 26, 27} }
    };

   
    cout << "Matriz  (3x3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "matriz[" << i << "][" << j << "][" << k << "] = " 
                     << matriz[i][j][k] << endl;
            }
        }
    }

    
    int valor;
    cout << "\nValor a buscar: ";
    cin >> valor;
    bool encontrado = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (matriz[i][j][k] == valor) {
                    cout << "Encontrado en posicion (" 
                         << i << "," << j << "," << k << ")" << endl;
                    encontrado = true;
                }
            }
        }
    }

    if (!encontrado) {
        cout << "Valor no encontrado en la matriz ." << endl;
    }

    return 0;
}
