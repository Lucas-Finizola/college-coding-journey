import java.util.Scanner;
// bibliteca para acessar a função Scanner
public class entrada_e_saida {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite algo:");
        String saida = entrada.nextLine();
        System.out.println("Voce digitou: " + saida);
    }

}


