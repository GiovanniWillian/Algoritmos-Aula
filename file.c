#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE * arquivo = fopen("entrada.txt", "wt");
        if(arquivo == NULL)
        {
        printf("Erro na abertura do arquivo!");
        exit(1);
        }
        else
        {
        printf("Arquivo gerado com sucesso.");
        }
        fclose(arquivo);
    return 0;
}