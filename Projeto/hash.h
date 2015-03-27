/* Cria a estrutura de dados de Hash. */

#define M 11
#define TAM_CESTO 2

typedef struct
{
    int chave, offset;
} CESTO;

typedef struct
{
    int cont;
    CESTO cesto[TAM_CESTO];
} HASHIDX;


/*******************************************************************************
DESCRI��O: Fun��o hashing h(k) que transforma uma chave k em um endere�o.
PAR�METRO: k - chave.
RETORNO: RRN a partir da chave k.
*******************************************************************************/
int h(int k);


/*******************************************************************************
DESCRI��O: Insere a chave em determinado endere�o no arquivo de �ndice Hash.
PAR�METRO: HASHidx - Arquivo de �ndice de Hash
           chave - Chave a ser inserida (cod_controle)
           rrn - Endere�o no �ndice Hash (gerado a partir da chave)
           offset - Endere�o do registro no arquivo AP1
           tentativa - N�mero de tentativas de inser��o at� dar certo
*******************************************************************************/
void Hash_Insere(FILE **HASHidx, int chave, int rrn, int offset, int tentativa);


/*******************************************************************************
DESCRI��O: Imprime os dados de uma vacina��o.
PAR�METRO: AP1 - Arquivo Principal 1
           AP2 - Arquivo Principal 2
           offset - Byteoffset de uma chave no arquivo AP1
*******************************************************************************/
void Hash_Imprime(FILE *AP1, FILE *AP2, int offset);


/*******************************************************************************
DESCRI��O: Busca uma dada vacina e exibe seus dados (inclusive do cachorro).
PAR�METRO: chave - Chave a ser pesquisada (c�digo de controle)
           rrn - Endere�o no �ndice Hash (gerado a partir da chave)
           acessos - N�mero de acessos para encontrar a chave.
           HASHidx - Arquivo de �ndice de Hash
           AP1 - Arquivo Principal 1
           AP2 - Arquivo Principal 2
*******************************************************************************/
void Hash_Pesquisa(int chave, int rrn, int acessos, FILE *HASHidx, FILE *AP1, FILE *AP2);
