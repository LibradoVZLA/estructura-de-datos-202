using System;

class MergeSort {
    void Merge(int[] arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int[] L = new int[n1];
        int[] R = new int[n2];
        for (int i = 0; i < n1; i++) L[i] = arr[l + i];
        for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
        int iIndex = 0, jIndex = 0, k = l;
        while (iIndex < n1 && jIndex < n2) {
            if (L[iIndex] <= R[jIndex]) arr[k++] = L[iIndex++];
            else arr[k++] = R[jIndex++];
        }
        while (iIndex < n1) arr[k++] = L[iIndex++];
        while (jIndex < n2) arr[k++] = R[jIndex++];
    }

    void Sort(int[] arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2; 
            Sort(arr, l, m);
            Sort(arr, m + 1, r);
            Merge(arr, l, m, r);
        }
    }

    static void Main() {
        int[] arr = {39, 28, 44, 11};
        MergeSort ob = new MergeSort();
        Console.WriteLine("Antes de ordenar: " + string.Join(" ", arr));
        ob.Sort(arr, 0, arr.Length - 1);
        Console.WriteLine("Después de ordenar: " + string.Join(" ", arr));
    }
}
