import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String aa[]) {
        Scanner teclado = new Scanner(System.in);
 
        int N = teclado.nextInt();
        int[] numeros = new int[N];
 
        for(int i=0; i<N; i++){
            numeros[i] = teclado.nextInt();
        }
 
        Arrays.sort(numeros);
 
        int nAux = numeros[N-1];     
 
        int[] arrayAux = new int[nAux + 1];
 
        for(int i=0; i<numeros.length; i++){
            arrayAux[numeros[i]] += 1;
        }
 
        for(int x = 0; x < arrayAux.length; x++){
            if(arrayAux[x] != 0){
                System.out.println(x+" aparece "+arrayAux[x]+ " vez(es)");
            }
        }
 
        teclado.close();      
    }
}
