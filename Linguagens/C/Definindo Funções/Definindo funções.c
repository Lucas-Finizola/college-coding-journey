#include <stdio.h>

float Convert_Temp(float f);

int fatorial(int x);

int main(void) {
  float f, c;
  int n, x;
  
  printf("Questao 1\nConverter Fahrenheit para Celsius\n");
  printf("Digite a temperatura em Graus Fahrenheit: ");
  scanf("%f", &f);
  c = Convert_Temp(f);
  printf("Resultado: %.2f graus Celsius\n", c);
  
  printf("Questao 2\nFatorial de um numero\n");
  printf("Digite o numero escolhido: ");
  scanf("%d", &n);
  x = fatorial(n);
  printf("Resultado: %d\n", x);

  return 0;
}

int fatorial(int z){
    int fat = 1;
    for (int y = z; y > 1; y--){
        fat *= y;
    }
    return fat;
}

float Convert_Temp(float f) {
  float C;
  C = (f - 32) * (5.0 / 9.0);
  return C;
}
