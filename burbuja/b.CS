using System;

class BubbleSortCSharp {
    static void Main() {
        int[] numeros = new int[15];
        Random rand = new Random();

        for (int i = 0; i < numeros.Length; i++) {
            numeros[i] = rand.Next(1, 21);
        }
        Console.WriteLine("Números generados:");
        for (int i = 0; i < numeros.Length; i++) {
            Console.WriteLine("Numero " + (i + 1) + " : " + numeros[i]);
        }
        for (int i = 0; i < numeros.Length - 1; i++) {
            for (int j = 0; j < numeros.Length - 1 - i; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    int temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }
        Console.WriteLine("\nNúmeros ordenados:");
        for (int i = 0; i < numeros.Length; i++) {
            Console.WriteLine("Numero " + (i + 1) + " : " + numeros[i]);
        }
    }
}
