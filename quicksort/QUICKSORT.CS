using System;

class QuickSort {
    static int Partition(int[] a, int l, int h) {
        int pvt = a[h], j = l - 1;
        for (int k = l; k < h; k++) {
            if (a[k] < pvt) {
                j++;
                Swap(a, j, k);
            }
        }
        Swap(a, j + 1, h);
        return j + 1;
    }

    static void Swap(int[] a, int j, int k) {
        int t = a[j]; a[j] = a[k]; a[k] = t;
    }

    static void QckSort(int[] a, int l, int h) {
        if (l < h) {
            int pi = Partition(a, l, h);
            QckSort(a, l, pi - 1);
            QckSort(a, pi + 1, h);
        }
    }

    static void Main() {
        int[] a = {10, 7, 8, 9, 1, 5};
        Console.Write("El arreglo antes de ordenarlo: ");
        foreach (int v in a) Console.Write(v + " ");
        Console.WriteLine();
        QckSort(a, 0, a.Length - 1);
        Console.Write("El arreglo después de ordenarlo: ");
        foreach (int v in a) Console.Write(v + " ");
        Console.WriteLine();
    }
}

