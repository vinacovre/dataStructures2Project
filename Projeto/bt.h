/*******************************************************************************
                Cria a estrutura de dados de �rvores B.
*******************************************************************************/

/* Defini��es de constantes para a �rvore B */
#define MAXKEYS 4 /* �rvore B de ordem M (onde M = MAXKEYS + 1) */
#define MINKEYS ceil((MAXKEYS+1)/2) /* M�nimo de n�s em uma p�gina (exceto para a ra�z) */
#define NIL (-1)
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

extern short int root; // rrn of root page
extern int btfd; // file descriptor of btree file
extern int infd; // file descriptor of input file

/*******************************************************************************
                                    Fim.
*******************************************************************************/

void inicializarBT();

/*int btclose();
btopen ();
btread (short rrn, BTPAGE *page_ptr);
btwrite (short rrn, BTPAGE *page_ptr);
create_root (char key, short left, short right);
short create_tree();
short getpage ();
short getroot ();
insert (short rrn, char key, short *promo_r_child, char *promo_key);
ins_in_page (char key,short r_child, BTPAGE *p_page);
pageinit (BTPAGE *p_page);
putroot(short root);
search_node (char key, BTPAGE *p_page, short *pos);
split(char key, short r_child, BTPAGE *p_oldpage, char *promo_key, short *promo_r_child, BTPAGE *p_newpage);
*/
