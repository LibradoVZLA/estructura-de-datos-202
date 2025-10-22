using System;

class SELECCION {
    static void SELECCION(int[] arr) {
        int n = arr.Length;
        for (int i = 0; i < n; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    static void PrintArray(int[] arr) {
        foreach (int num in arr) {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }

    static void Main() {
        int[] arr = {65, 26, 13, 23, 12};
        Console.WriteLine("Arreglo antes de ordenar:");
        PrintArray(arr);

        SelectionSort(arr);

        Console.WriteLine("Arreglo después de ordenar:");
        PrintArray(arr);
    }
}
