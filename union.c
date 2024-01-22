#include<stdio.h>
#include<stdlib.h>

typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa{
char nome[50];
int idade;
Documentos doc;
}Pessoa;

void dados_pessoa(Pessoa * p){

    int opcao;
    printf("Informe o nome: \t");
    scanf(" %[^\n]", p->nome);
    printf("\nInforme a idade: \t");
    scanf("%d", &p->idade);
    printf("\nDigite 1 para CPF ou 0 para RG \t");
    scanf("%d", &opcao);
    if (opcao){
        scanf(" %[^\n]", p->doc.cpf );
    }
    else{
        scanf(" %[^\n]", p->doc.rg );
    }
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    dados_pessoa(pessoa);
    printf("CPF = %s \n RG=%s", pessoa->doc.cpf, pessoa->doc.rg);
    return 0;

}
