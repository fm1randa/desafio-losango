#include <stdlib.h>
#include <stdio.h>

int main(){
    int aux, i, j, k, qtd = 1;
    printf("Insira um numero: ");
    scanf("%i", &aux); // define o numero de # que formarão as arestas


    // cria a parte superior e o meio do losango
    for(i = 0; i < aux; i++){ // define o numero de linhas. o meio sempre sera a linha do numero que o usuario escolheu. exemplo: usuario escolheu 5, o meio sera a linha de numero 5. logo, o numero de linhas da parte superior e inferior é igual a aux-1. mas, como neste bloco cria-se a parte de cima e o meio, o numero de linhas e igual a aux;
        for(j = 0; j < aux-(i+1); j++){ // imprime os espacos antes dos # para organiza-los na diagonal (a qtd de espacos sempre comeca em aux-1 e a cada linha diminui em 1)
            printf(" ");
        }
        if(i == 0){ // caso seja o primeiro # (o topo do losango) so imprime um #
            printf("#\n");
        }
        else{ // se nao for o topo do losango...
            printf("#"); // imprime o # que forma a aresta da esquerda
            for(k = 0; k < qtd; k++){ // imprime os espacos entre o # que forma a aresta da esquerda e o # que forma a aresta da direita
                printf(" "); 
            }
            printf("#\n"); // imprime o # que forma a aresta da direita
            qtd += 2; // a qtd de espacos sempre comeca em 1 e vai aumentando de dois em dois
        }
    }
    qtd -= 4; // define a qtd de espacos de volta pro valor da ultima linha da parte superior

    // cria a parte inferior do losango (inverso da parte superior)
    for(i = 0; i < aux-1; i++){ // define o numero de linhas.
        for(j = 1+i; j > 0; j--){ // imprime os espacos antes dos # para organiza-los na diagonal (a qtd de espacos sempre comeca em 1 e a cada linha aumenta em 1)
            printf(" ");
        }
        if(i == aux-2){ // caso seja o ultimo # (a base do losango) so imprime um #
            printf("#\n");
        }
        else{ // se nao for a base do losango...
            printf("#"); // imprime o # que forma a aresta da esquerda
            for(k = 0; k < qtd; k++){ // imprime os espacos entre o # que forma a aresta da esquerda e o # que forma a aresta da direita
                printf(" ");
            }
            printf("#\n"); // imprime o # que forma a aresta da direita
            qtd -= 2; // a qtd de espacos sempre comeca com o mesmo valor da ultima linha da parte superior e vai diminuindo de dois em dois
        }
    }
}
