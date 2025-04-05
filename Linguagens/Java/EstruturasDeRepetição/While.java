
import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        
        int numero;
        
        System.out.println("Digite um número");
        numero = entrada.nextInt();
        
        while(numero !=0)
        {
            System.out.println("O usuário digitou "+ numero);
            System.out.println("Digite outro número");
        numero = entrada.nextInt();
            
        }
    }
}