#include<stdio.h>
#include<stdlib.h>


// Definindo a estrutura aluno
struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];

};

typedef struct aluno Aluno;

void preenche(struct aluno * estudante){
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante ->nome);
    printf("Digite a idade: \n");
    scanf("%d", &estudante ->idade);
    printf("Digite a matricula: \n");
    scanf("%d", &estudante ->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", &estudante ->email);
}

void imprime(struct aluno * estudante){
    printf("Nome: %s\n IDade: %d \n Matricula: %d \n Email: %s",
     estudante->nome,estudante->idade,estudante->matricula,estudante->email);
}

//Alocação dinamica de struct pois a variavel agora é um ponteiro
int main(void){
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL){
        exit(1);
    }
    preenche(estudante);
    printf("Seus dados são:");
    imprime(estudante);
    return 0;
}