#include <stdio.h>

int main() {

    /*
    //Notas
    
    float nota;

    printf("Digite sua media: \n");
    scanf("%f", &nota);

    if (nota>=6 && nota<=10){
        printf("Aprovado");
    }
    else if (nota>=0 && nota<=6){
        printf("Final\n");
    }
    else {
        printf("invalido");
    }

*/
/*

    //TESTE 2
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("Numero par\n");
    }
    else {
        printf("Numero impar\n");
    }
    */


    int anos;

    printf("Digite a idade: \n");
    scanf("%d", &anos);

    if(anos>=5 && anos<=7){
        printf("Nadador de idade: %d eh da categoria: Infantil A", anos);
    }
    else if (anos>=8 && anos<=10){
        printf("Nadador de idade: %d eh da categoria: Infantil B\n", anos);
    }
    else if (anos>=11 && anos<=12){
        printf("Nadador de idade: %d eh da categoria: Juvenil A\n", anos);
    }
    else if (anos>=14 && anos<=17){
        printf("Nadador de idade: %d eh da categoria: Juvenil B\n", anos);
    }
    else if (anos>17){
        printf("Nadador de idade: %d eh da categoria: Senior", anos);
    }

    else {
        printf("Novo demais");
    }
    


}