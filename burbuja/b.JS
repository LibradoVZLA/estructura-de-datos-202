function main() {
    let numeros = Array.from({ length: 15 }, () => Math.floor(Math.random() * 20) + 1);

    console.log("Números generados:");
    numeros.forEach((num, i) => console.log(`Numero ${i + 1} : ${num}`));

    
    for (let i = 0; i < numeros.length - 1; i++) {
        for (let j = 0; j < numeros.length - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                let temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    console.log("\nNúmeros ordenados:");
    numeros.forEach((num, i) => console.log(`Numero ${i + 1} : ${num}`));
}

main();
