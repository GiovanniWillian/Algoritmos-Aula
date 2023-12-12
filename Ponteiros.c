#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
int divisao(int a, int b){
    return a / b;
}
int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x, y);
}
int main() {
    int op;
    int result;
    printf("Informe a operacao\n");
    printf("1 para soma\n");
     printf("2 para subtracao\n");
      printf("3 para multiplicacao\n");
       printf("4 para divisao\n");
    scanf("%d", &op);
    if(op == 1){
        result = soma;
    }
    if(op == 2){
        result = subtracao;
    }
    if(op == 3){
        result = multiplicacao;
    }
    if(op == 4){
        result = divisao;
    }


    int resultado = calcula(5, 3, result);
    printf("Resultado: %d", resultado);
    return 0;
}
