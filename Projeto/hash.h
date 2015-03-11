/*******************************************************************************
                     Cria a estrutura de dados de Hash.
*******************************************************************************/

#define M 11
//#define TAM_HASH 11
#define TAM_CESTO 2

typedef struct
{
    int status, chave, rrn;
} HASHIDX;

/*******************************************************************************
                                    Fim.
*******************************************************************************/


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
           endereco - Endere�o a ser inserida a chave (gerado a partir da chave)
*******************************************************************************/
void Hash_Insere(FILE **HASHidx, int cahve, int endereco);
