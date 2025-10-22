public class QuickSort {
    static int partition(int[] a, int l, int h) {
        int pvt = a[h], j = l - 1;
        for (int k = l; k < h; k++) {
            if (a[k] < pvt) {
                j++;
                swap(a, j, k);
            }
        }
        swap(a, j + 1, h);
        return j + 1;
    }

    static void swap(int[] a, int j, int k) {
        int t = a[j]; a[j] = a[k]; a[k] = t;
    }

    static void qckSort(int[] a, int l, int h) {
        if (l < h) {
            int pi = partition(a, l, h);
            qckSort(a, l, pi - 1);
            qckSort(a, pi + 1, h);
        }
    }

    public static void main(String[] args) {
        int[] a = {10, 7, 8, 9, 1, 5};
        System.out.print("El arreglo antes de ordenarlo: ");
        for (int v : a) System.out.print(v + " ");
        System.out.println();
        qckSort(a, 0, a.length - 1);
        System.out.print("El arreglo después de ordenarlo: ");
        for (in
