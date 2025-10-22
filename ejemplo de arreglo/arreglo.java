public class Trabajo1 {
    public static void main(String[] args) {
        int[] arreglo = {1, 2, 3, 4, 5};
        arreglo[2] = 10;
        System.out.println("Elemento en la posición 2: " + arreglo[2]);

        System.out.println("Recorriendo el arreglo:");
        for (int num : arreglo) {
            System.out.println(num);
        }
    }
}
