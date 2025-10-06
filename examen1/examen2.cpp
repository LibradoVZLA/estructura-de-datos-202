#include <iostream>
#include <vector>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Número de filas: ";
    cin >> filas;
    cout << "Número de columnas: ";
    cin >> columnas;

   
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }

   
    for (int j = 0; j < columnas; j++) {
        int suma = 0;
        for (int i = 0; i < filas; i++) {
            suma += matriz[i][j];
        }
        cout << "Suma de columna " << j << ": " << suma << endl;
    }

    return 0;
}
