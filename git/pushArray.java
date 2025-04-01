package sp1_aula4;

public class pushArray {
    
    public static String[] push(String [] array, String push){
        String[] nome = new String[array.length + 1];
        for (int i = 0; i < array.length; i++)
        nome[i] = array[i];
        nome[array.length] = push;
        return nome;
    }
}