import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class ManipulaArquivosTexto {
    public static void main(String[] args) {
        try {
            File arquivo = new File("dados/poema.txt");
            Scanner scanner = new Scanner(arquivo);
            while (scanner.hasNextLine()) {
                String linha = scanner.nextLine();
                System.out.println("%s%n", linha);
            }
        } catch (FileNotFoundException ex) {
            System.out.println("Erro abertura do arquvio: %S.%n", ex.getMessage());
        } 
        
    }
}