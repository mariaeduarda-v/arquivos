public class ManipulaArquivoCSV{
    public final String DELIMITADOR_PONTO_VIRGULA = ";";
    public final String DELIMITADOR_VIRGULA = ",";
    public static void main(String[] args) {
        ManipulaArquivoCSV csv = new ManipulaArquivoCSV();
        List<List<String>> registroDados = csv.leitura();
        csv.imprimeDados(registroDados);
    }
}
