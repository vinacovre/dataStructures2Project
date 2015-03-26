/* Cria a estrutura de dados de �rvores B. */

/* Defini��es de constantes para a �rvore B */
#define MAXKEYS 4 /* �rvore B de ordem M (onde M = MAXKEYS + 1) */
#define MINKEYS MAXKEYS/2 /* M�nimo de n�s em uma p�gina (exceto para a ra�z) */
#define NIL (-1)
#define NOKEY '@'
#define NO 0
#define YES 1

typedef struct 
{
    int id; /* Chave */
    short rrn;
} BTKEY;

typedef struct 
{
    short keycount; /* N�mero de chaves em uma p�gina */
    BTKEY key[MAXKEYS]; /* P�gina Atual. */
    short child[MAXKEYS+1]; /* Ponteiros para os filhos */
} BTPAGE;

#define PAGESIZE sizeof(BTPAGE)

int btopen(FILE **BTidx);
short getroot(FILE **BTidx);
void putroot(short root, FILE **BTidx);
int btread(short rrn, BTPAGE *page, FILE **BTidx);
int searchnode(int id, BTPAGE *page, short *pos);
void insertpage(BTKEY key, short r_child, BTPAGE *page);
int btwrite(short rrn, BTPAGE *page, FILE **BTidx);
short newpage(FILE **BTidx);
void initpage(BTPAGE *page);
short createroot(BTKEY key, short left, short right, FILE **BTidx);
short createtree(FILE **BTidx);
void split(BTKEY key, short r_child, BTPAGE *p_oldpage, BTKEY *promo_key, short *promo_r_child, BTPAGE *p_newpage, FILE **BTidx);
int insert(short rrn, BTKEY key, short *promo_r_child, BTKEY *promo_key, int *found, FILE **BTidx);
void insertnode(short root, BTKEY key, FILE **BTidx);
