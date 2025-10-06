#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<string>> tablero(3, vector<string>(3, " "));

void imprimir_tablero() {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << tablero[i][0] << " | " << tablero[i][1] << " | " << tablero[i][2];
        cout << endl;
        if (i < 2) {
            cout << "--+---+--" << endl;
        }
    }
    cout << endl;
}

bool hay_ganador(string jugador) {
   
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
            return true;
        }
    }
    
    
    for (int col = 0; col < 3; col++) {
        if (tablero[0][col] == jugador && tablero[1][col] == jugador && tablero[2][col] == jugador) {
            return true;
        }
    }
    
    
    if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
        return true;
    }
    if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) {
        return true;
    }
    
    return false;
}

bool tablero_lleno() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == " ") {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string jugador = "X";
    
    while (true) {
        imprimir_tablero();
        cout << "Turno del jugador " << jugador << endl;
        
        int fila, col;
        
        cout << "Elige fila (1-3): ";
        cin >> fila;
        cout << "Elige columna (1-3): ";
        cin >> col;
        
       
        fila--;
        col--;
        
        if (fila < 0 || fila > 2 || col < 0 || col > 2) {
            cout << "Posición Invalida. Intenta otra vez." << endl;
            continue;
        }
        
        if (tablero[fila][col] != " ") {
            cout << "Esa casilla ya está ocupada." << endl;
            continue;
        }
        
        tablero[fila][col] = jugador;
        
        if (hay_ganador(jugador)) {
            imprimir_tablero();
            cout << "Jugador " << jugador << " gana" << endl;
            break;
        }
        
        if (tablero_lleno()) {
            imprimir_tablero();
            cout << "Empate" << endl;
            break;
        }
        
       
        jugador = (jugador == "X") ? "O" : "X";
    }
    
    return 0;
}