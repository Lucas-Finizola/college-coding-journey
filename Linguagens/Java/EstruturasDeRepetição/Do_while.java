import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
    
    Scanner entrada = new Scanner(System.in);
    int sim=0, nao=0, voto;
    
    do
    {
        System.out.println("O palmeiras vai ter mundial? Digite 1 para sim e 2 para não");
        
        voto = entrada.nextInt();
        
        switch (voto){
            case 1: 
                sim = sim + 1;
                break;
            case 2:
                nao++;
                break;
            default:
                       
                                  System.out.println("opcaoinvalida, por favor digite 1 ou 2");
            
        }
    }while(voto !=0);
    //do while finaliza com ponto e virgula
    System.out.println("Quantidade de votos para SIM: " + sim);
    System.out.println("Quantidades de votos para NÃO: "+ nao);
    }
}