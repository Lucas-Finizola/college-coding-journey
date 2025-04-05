import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
     
     int matricula[] = new int[20];
     // declarando um arrya homogeo
     
     matricula[2] = 805957;
     //Atribuindo valor em um indice de array 
     
     System.out.println("Matricula do aluno"+ matricula[2]);
     //Mostrando o valor do indice
     
     
     Scanner entrada = new Scanner(System.in);
     //Atribuindo valor no array pelo for
     
     for (int i =0;i<20; i++){
         System.out.println("Digite o valor do indice"+"["+i+"]: ");
         matricula[i] = entrada.nextInt();
     }
     //Mostrando os valores dentro do array
     for (int i =0;i<20; i++){
         System.out.println("Numero na posicao"+"["+i+"]: "+ matricula[i]);
     }
     
     
     
    }
}