import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        
        String senha;
        //String é uma classe, tornando a senha como um objeto
        
        System.out.println("Digite a senha");
        senha = entrada.next();
        
        //Metodo de comparacão de objetos
        while(!senha.equals("naodigo"))
        {
            System.out.println("Senha errada");
            System.out.println("Digite a senha novamente");
            senha = entrada.next();
            
        }
    }
}