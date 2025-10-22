class Persona {
    constructor(nombre, edad) {
        if (this.constructor === Persona) {
            throw new Error("Clase abstracta, no se puede instanciar");
        }
        this.nombre = nombre;
        this.edad = edad;
    }
    mostrarInfo() {
        throw new Error("Método abstracto");
    }
}
