using System;

class Program {
    static void Main() {
        
        int[] arreglo = new int[5] {1, 2, 3, 4, 5};

       
        arreglo[2] = 10;

       
        Console.WriteLine("Elemento en la posición 2: " + arreglo[2]);

        
        Console.WriteLine("Recorriendo el arreglo:");
        foreach (int num in arreglo) {
            Console.WriteLine(num);
        }
    }
}


