using System;
using System.Collections.Generic;
class Program
{
    static void Main()
    {
        List<int> arreglo = new List<int> { 10, 20, 30, 40, 50 };
        arreglo.Insert(2, 25);

        Console.WriteLine("Arreglo después de la inserción:");
        foreach (int elemento in arreglo)
        {
            Console.WriteLine(elemento);
        }
    }
}