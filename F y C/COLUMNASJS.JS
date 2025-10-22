const f = 3, c = 3;
const twoDarr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

console.log("PROGRAMA DE RECORRIDO DE COLUMNAS");

for (let j = 0; j < c; j++) {
    let columna = `Columna ${j + 1}: `;
    for (let i = 0; i < f; i++) {
        columna += twoDarr[i][j] + " ";
    }
    console.log(columna);
}