#include <iostream>
using namespace std;
int main() {
    int arreglo[5] = {1, 2, 3, 4, 5};
    arreglo[2] = 10;
    cout << "Elemento en la posición 2: " << arreglo[2] << endl;
    cout << "Recorriendo el arreglo:" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}
