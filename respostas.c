#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibbonacci(int n){
    if (n == 0 || n == 1){
        return n;
    }else {
        return fibbonacci(n-1) + fibbonacci(n-2);
    }
}

void soma(){
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("A variável SOMA terá o valor = %d\n", SOMA);
}

void questao2(){
    int n = 1;
    int cont = 1;
    printf("Digite um número para calcular a sequência de fibonnaci: ");
    scanf("%d", &n);
    while (1){
        int fib = fibbonacci(cont);
        if (fib == n){
            printf("O número %d pertence a sequência de fibonnaci\n", n);
            break;
        }else if (fib > n){
            printf("O número %d não pertence a sequência de fibonnaci\n", n);
            break;
        }
        cont++;
    }
}

char* reverterString(char* string){
    int tamanho = strlen(string);
    printf("O tamanho da string é: %d\n", tamanho);
    char *stringRevertida = malloc(tamanho * sizeof(char));
    for (int i = 0; i < tamanho; i++){
        stringRevertida[i] = string[tamanho - i - 1];
    }
    printf("A string invertida é: %s\n", stringRevertida);
}

int main (){
    soma();
    questao2();
    char *string = malloc(100 * sizeof(char));
    printf("Digite uma string para ser invertida: ");
    scanf("%s", string);
    reverterString(string);
}