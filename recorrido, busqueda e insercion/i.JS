const arreglo = [10, 20, 30, 40, 50];


arreglo.splice(2, 0, 25);

console.log("Arreglo después de la inserción:");
for (const elemento of arreglo) {
  console.log(elemento);
}