import java.util.Scanner;

//Faça um programa que receba 3 notas de um aluno e calcule sua média;
public class media_notas{
    public static void main(String[] args){
        float n1,n2,n3;
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite a primeira nota: ");
        n1 = entrada.nextFloat();
        System.out.println("Digite a segunda nota");
        n2 = entrada.nextFloat();
        System.out.println("Digite a terceira nota:");
        n3 = entrada.nextFloat();
        System.out.println("Sua media final e: "+ ((n1+n2+n3)/3));
    }
}