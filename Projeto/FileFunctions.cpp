/*******************************************************************************
DESCRI��O DO ARQUIVO: Esse arquivo.cpp re�ne as fun��es que utlilizam dos
arquivos do projeto. Em outras palavras, � o conjunto de fun��es relacionadas
a opera��es de main nos arquivos bin�rios.
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "bt.h"

short int header; /* Declara o cabe�alho do arquivo AP1: RRN da P�gina Ra�z */
BTIDX btidx; /* Declara �ndice prim�rio de �rvore B */

void InicializaArquivos(FILE **AP1, FILE **BTidx)
{
    rewind(*AP1);
    int aux = -1; /* -1 indica que o arquivo (AP1) est� vazio */
    fwrite(&aux, sizeof(int), 1, *AP1);
    
    rewind(*BTidx);
    btidx.keycount = 0; /* Indica que a P�gina tem zero registros */
    fwrite(&btidx.keycount, PAGESIZE, 1, *BTidx);
}

void AbreArquivos(FILE **AP1, FILE **AP2, FILE **BTidx)
{
    /* Para AP1 */
    if((*AP1 = fopen("AP1.bin","r+b")) == NULL) /* Se o arquivo n�o existir */
    {
        /* Cria o Arquivo Principal 1 'AP1' */
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
        
        /* Cria o arquivo de �ndice de �rvore B 'BTidx' */
        if((*BTidx = fopen("BTidx.bin","w+b")) == NULL) /* Cria o arquivo com w+b */
        {
            printf("Erro em BTidx. Abortando...");
            getch();
            return;
        }
        
        InicializaArquivos(AP1, BTidx);
    }
    else /* Se o arquivo j� existir */
    {
        if((*AP1 = fopen("AP1.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em AP1. Abortando...");
            getch();
            return;
        }
        rewind(*AP1);
        fread(&header, sizeof(short int), 1, *AP1); /* Pega o Header da �rvore B de AP1 */
        
        if((*BTidx = fopen("BTidx.bin","w+b")) == NULL) /* Apenas abre para leitura e escrita */
        {
            printf("Erro em BTidx. Abortando...");
            getch();
            return;
        }
        rewind(*BTidx);
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
