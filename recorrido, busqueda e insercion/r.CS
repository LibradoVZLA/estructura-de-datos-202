using System;

class Program
{
    static void Main()
    {
        int[] arreglo = { 10, 20, 30, 40, 50 };

        Console.WriteLine("Recorriendo el arreglo:");
        foreach (int elemento in arreglo)
        {
            Console.WriteLine(elemento);
        }
    }
}