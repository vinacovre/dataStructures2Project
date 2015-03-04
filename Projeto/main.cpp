#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* Define um tipo para o cadastro de vacinas (AP1) */
typedef struct
{
    int cod_controle;
    int cod_cachorro;
    char vacina[30];
    char data[6]; // sexto caracter � o '\0' 
    char responsavel[30];
} VACINA;

/* Define um tipo para o cadastro de cachorros (AP2) */
typedef struct
{
    int cod_cachorro;
    char raca[30];
    char nome[30];
} CACHORRO;

/* Declarar �ndices prim�rios de �rvore B e de Hash */

/* Declara��o das Fun��es */
void AbreArquivos(FILE **AP1, FILE **AP2);
int Menu();

int main()
{
    FILE *AP1, *AP2;
    AbreArquivos(&AP1, &AP2);
    
    int opcao = Menu();
    
    getch();
    system("CLS");
    return 0;
}

/*******************************************************************************
DESCRI��O: Verifica se os arquivos j� foram criados.
           Se n�o, cria-os.
PAR�METROS: AP1 - Arquivo Principal 1
            AP2 - Arquivo Principal 2
*******************************************************************************/
void AbreArquivos(FILE **AP1, FILE **AP2)
{
    /* Para AP1 */
    if((*AP1 = fopen("AP1.bin","r+b")) == NULL) /* Se o arquivo n�o existir */
    {
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
    }
    else /* Se o arquivo j� existir */
    {
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
    }
    
    /* Para AP2 */
    if((*AP2 = fopen("AP2.bin","r+b")) == NULL) /* Se o arquivo n�o existir */
    {
        if((*AP2 = fopen("AP2.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em AP2. Abortando...");
            getch();
            return;
        }
    }
    else /* Se o arquivo j� existir */
    {
        if((*AP2 = fopen("AP2.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em AP2. Abortando...");
            getch();
            return;
        }
    }
}
