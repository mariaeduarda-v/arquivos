public class ArgsLinhaDeComandoBasico {
    public static void main(String[] args) {
        System.out.printf("qtd de argumentos = %d%n", args.length);
        for (int 1 = 0; i < args.length; i++) {
            System.out.printf("\targs[%d] = %s%n", i, args[i]);
        }
    }
}