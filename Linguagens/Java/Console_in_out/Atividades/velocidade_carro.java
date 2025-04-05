import java.util.Scanner;

/*Faça um programa que receba a distância, o
tempo que um veículo levou para percorrê-la e calcula sua
velocidade média */
public class velocidade_carro{
    public static void main(String[] args) {
        float distancia, tempo, velocidade;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite a distancia pecorrida em km: ");
        distancia = entrada.nextFloat();
        System.out.println("Digite o tempo pecorrido em horas: ");
        tempo = entrada.nextFloat();
        velocidade = distancia/tempo;
        System.out.println("Velocidade media e de: " + velocidade);
    }
}