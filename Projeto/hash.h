/* Cria a estrutura de dados de Hash. */
#define M 11
//#define TAM_HASH 11
#define TAM_CESTO 2

typedef struct
{
    int chave, offset;
} CESTO;

typedef struct
{
    short int cont;
    CESTO cesto[TAM_CESTO];
} HASHIDX;


/*******************************************************************************
DESCRI��O: Fun��o hashing h(k) que transforma uma chave k em um endere�o.
PAR�METRO: k - chave.
RETORNO: Endere�o a partir da chave k.
*******************************************************************************/
int h(int k);


/*******************************************************************************
DESCRI��O: Insere a chave em determinado endere�o no arquivo de �ndice Hash.
PAR�METRO: HASHidx - Arquivo de �ndice de Hash
           chave - Chave a ser inserida (cod_controle)
           rrn - Endere�o no �ndice Hash (gerado a partir da chave)
           endereco - Endere�o do registro no arquivo AP1
*******************************************************************************/
void Hash_Insere(FILE **HASHidx, int cahve, int rrn, int endereco);


/*******************************************************************************
DESCRI��O: Busca uma dada vacina e exibe seus dados (inclusive do cachorro).
PAR�METRO: chave - Chave a ser pesquisada (c�digo de controle)
           HASHidx - Arquivo de �ndice de Hash
           AP2 - Arquivo Principal 2
*******************************************************************************/
void Hash_Pesquisa(int chave, FILE *HASHidx, FILE *AP2);
