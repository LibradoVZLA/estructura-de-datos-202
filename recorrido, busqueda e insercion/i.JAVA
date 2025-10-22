import java.util.ArrayList;

public class INSERCION {
    public static void main(String[] args) {
        ArrayList<Integer> arreglo = new ArrayList<>();
        arreglo.add(10);
        arreglo.add(20);
        arreglo.add(30);
        arreglo.add(40);
        arreglo.add(50);

        
        arreglo.add(2, 25);

        System.out.println("Arreglo después de la inserción:");
        for (int elemento : arreglo) {
            System.out.println(elemento);
        }
    }
}