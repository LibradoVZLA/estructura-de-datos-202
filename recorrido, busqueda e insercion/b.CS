using System;

class Program
{
    static void Main()
    {
        int[] arreglo = { 10, 20, 30, 40, 50 };
        int elementoBuscado = 30;
        bool encontrado = false;

        for (int i = 0; i < arreglo.Length; i++)
        {
            if (arreglo[i] == elementoBuscado)
            {
                Console.WriteLine($"Elemento {elementoBuscado} encontrado en la posición {i}");
                encontrado = true;
                break;
            }
        }

        if (!encontrado)
        {
            Console.WriteLine("Elemento no encontrado en el arreglo.");
        }
    }
}