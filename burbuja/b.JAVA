import java.util.Random;

public class BURBUJA {
    public static void main(String[] args) {
        int[] numeros = new int[15];
        Random rand = new Random();

        
        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = rand.nextInt(20) + 1;
        }

        System.out.println("Números generados:");
        for (int i = 0; i < numeros.length; i++) {
            System.out.println("Numero " + (i + 1) + " : " + numeros[i]);
        }

        
        for (int i = 0; i < numeros.length - 1; i++) {
            for (int j = 0; j < numeros.length - 1 - i; j++) {
                if (numeros[j] > numeros[j + 1]) {
                    int temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }

        System.out.println("\nNúmeros ordenados:");
        for (int i = 0; i < numeros.length; i++) {
            System.out.println("Numero " + (i + 1) + " : " + numeros[i]);
        }
    }
}
