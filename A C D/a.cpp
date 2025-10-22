#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    virtual void mostrarInfo() = 0; 
}