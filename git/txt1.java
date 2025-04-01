import java.util.*;

main (){
public class numeroPar {
    public static void main(String[] args){
        Scanner valor = new Scanner(System.in);
        int numero = valor.nextInt();

        if(numero % 2 == 0){
            System.out.println("O numero digitado e par");
        }
        else{
            System.out.println("O numero digitado nao e par");
        }
        System.exit(0);
    }
}
}