/*******************************************************************************
DESCRI��O DA BIBLIOTECA: Essa biblioteca cria a estrutura de dados de �rvores B.
*******************************************************************************/

/* Defini��es de constantes para a �rvore B */
#define MAXKEYS 4 /* �rvore B de ordem M (onde M = MAXKEYS + 1) */
#define MINKEYS ceil((MAXKEYS+1)/2) /* M�nimo de n�s em uma p�gina (exceto para a ra�z) */
//#define NIL (-1)
#define NOKEY '@'
#define NO 0
#define YES 1

/* Define um tipo para a p�gina de uma �rvore B */
typedef struct
{
    short int keycount; /* N�mero de chaves em uma p�gina */
    int chave[MAXKEYS]; /* P�gina Atual. */
    short int child[MAXKEYS+1]; /* Ponteiros para os filhos */
} BTIDX;

#define PAGESIZE sizeof(BTIDX)
