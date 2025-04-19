/* Sistema de Livros com Busca Recursiva
 *
 * Objetivo:
 * - Cadastrar livros com Título, Autor e Ano.
 * - Alocar dinamicamente o vetor com malloc.
 * - Permitir expansão com realloc.
 * - Fazer busca recursiva por título.
 * - Listar todos os livros.
 * - Liberar a memória ao final.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 // criando struct do livro
 typedef struct livro {
     char titulo[100];
     char autor[100];
     int ano;
 } Livro;
 
 // função para alocar vetor inicial
 Livro* alocar_livros(int n) {
     Livro* livros = malloc(n * sizeof(Livro));
     if (livros == NULL) {
         printf("Erro ao alocar memória.\n");
         exit(1);
     }
     return livros;
 }
 
 // função para realocar vetor com novos livros
 Livro* realocar_livros(Livro* livros, int* n, int novos) {
     *n += novos;
     Livro* temp = realloc(livros, (*n) * sizeof(Livro));
     if (temp == NULL) {
         printf("Erro ao realocar memória.\n");
         free(livros);
         exit(1);
     }
     return temp;
 }
 
 // função para preencher livros entre posições específicas
 void preencher_livros(Livro* livros, int inicio, int fim) {
     for (int i = inicio; i < fim; i++) {
         getchar(); // limpar buffer antes do fgets
 
         printf("Digite o título do livro [%d]: ", i + 1);
         fgets(livros[i].titulo, 100, stdin);
         livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
 
         printf("Digite o autor do livro [%s]: ", livros[i].titulo);
         fgets(livros[i].autor, 100, stdin);
         livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
 
         printf("Digite o ano de publicação de [%s]: ", livros[i].titulo);
         scanf("%d", &livros[i].ano);
     }
 }
 
 // função recursiva para buscar título
 int buscar_livro(Livro* livros, int i, int total, char* titulo_buscado) {
     if (i >= total) {
         return -1; // não encontrado
     }
 
     if (strcmp(livros[i].titulo, titulo_buscado) == 0) {
         return i;
     }
 
     return buscar_livro(livros, i + 1, total, titulo_buscado);
 }
 
 // função para listar os livros
 void listar_livros(Livro* livros, int n) {
     printf("\nLista de Livros:\n");
     for (int i = 0; i < n; i++) {
         printf("\n[%d] %s\n", i + 1, livros[i].titulo);
         printf("Autor: %s\n", livros[i].autor);
         printf("Ano: %d\n", livros[i].ano);
     }
 }
 
 int main() {
     int n, novos;
     char opcao;
     Livro* livros;
 
     printf("Cadastro de Livros\n");
     printf("Quantos livros deseja cadastrar? ");
     scanf("%d", &n);
 
     livros = alocar_livros(n);
     preencher_livros(livros, 0, n);
 
     getchar(); // limpar o \n antes do fgets
     printf("\nDeseja cadastrar mais livros? (S/N): ");
     scanf("%c", &opcao);
 
     if (opcao == 's' || opcao == 'S') {
         printf("Quantos livros a mais? ");
         scanf("%d", &novos);
         int inicio = n;
         livros = realocar_livros(livros, &n, novos);
         preencher_livros(livros, inicio, n);
     }
 
     getchar(); // limpar buffer
     char titulo_busca[100];
     printf("\nDigite o título do livro para buscar: ");
     fgets(titulo_busca, 100, stdin);
     titulo_busca[strcspn(titulo_busca, "\n")] = '\0';
 
     int indice = buscar_livro(livros, 0, n, titulo_busca);
     if (indice != -1) {
         printf("\nLivro encontrado:\n");
         printf("Título: %s\n", livros[indice].titulo);
         printf("Autor: %s\n", livros[indice].autor);
         printf("Ano: %d\n", livros[indice].ano);
     } else {
         printf("\nLivro não encontrado.\n");
     }
 
     listar_livros(livros, n);
     free(livros);
 
     return 0;
 }
 