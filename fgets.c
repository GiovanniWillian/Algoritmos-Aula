#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE * arquivo = fopen("entrada.txt", "rt");
        char c[20];
        if(arquivo == NULL)
        {
        printf("Erro na abertura do arquivo!");
        exit(1);
        }
        else
        {
        printf("Arquivo criado\n");
        }
        fgets(c, 20, arquivo);
        printf("%s\n", c);
        if(!fclose(arquivo))
        {
            printf("Arquivo fechado com sucesso!");
        }
       
    return 0;
}