const arreglo = [10, 20, 30, 40, 50];
const elementoBuscado = 30;
let encontrado = false;

for (let i = 0; i < arreglo.length; i++) {
    if (arreglo[i] === elementoBuscado) {
        console.log(`Elemento ${elementoBuscado} encontrado en la posición ${i}`);
        encontrado = true;
        break;
    }
}

if (!encontrado) {
    console.log("Elemento no encontrado en el arreglo");
}