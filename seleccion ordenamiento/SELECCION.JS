function SELECCION(arr) {
    let n = arr.length;
    for (let i = 0; i < n; i++) {
        let minIdx = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        [arr[i], arr[minIdx]] = [arr[minIdx], arr[i]];
    }
}

function printArray(arr) {
    console.log(arr.join(" "));
}

let arr = [65, 26, 13, 23, 12];
console.log("Arreglo antes de ordenar:");
printArray(arr);

selectionSort(arr);

console.log("Arreglo después de ordenar:");
printArray(arr);
