public class BUSQUEDA {
    public static void main(String[] args) {
        int[] arreglo = {10, 20, 30, 40, 50};
        int elementoBuscado = 30;
        boolean encontrado = false;

        for (int i = 0; i < arreglo.length; i++) {
            if (arreglo[i] == elementoBuscado) {
                System.out.println("Elemento " + elementoBuscado + " encontrado en la posición " + i);
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            System.out.println("Elemento no encontrado en el arreglo.");
        }
    }