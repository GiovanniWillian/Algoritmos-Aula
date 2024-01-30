#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE * arquivo = fopen("entrada.txt", "rt");
        int c;
        if(arquivo == NULL)
        {
        printf("Erro na abertura do arquivo!");
        exit(1);
        }
        else
        {
        printf("Arquivo criado\n");
        }
        c = fgetc(arquivo);
        printf("%c\n", c);
        if(!fclose(arquivo))
        {
            printf("Arquivo fechado com sucesso!");
        }
       
    return 0;
}